#include "bfs.h"

void dist_log(int* vertexes, int src_vertex, numbers_t* dist){
    printf("Distances from vertex '%d' to:\n",src_vertex);
    _FOR_(i,dist->size){
        printf("'%d': %d\n",vertexes[i],dist->data[i]);
    }
}

void bfs_matrix(mtrx_grph_t* graph,int vertex_index,numbers_t* dist){
    //every i in dist = -1
    fill_num(dist,-1);

    lim_queue* vertexes_queue = lim_queue_create(graph->size);
    lim_queue_push(vertexes_queue,vertex_index);

    int v;//next vertex
    int* front;
    dist->data[vertex_index] = 0;

    printf("%d,",vertex_index);
    while (vertexes_queue->length > 0){
        v = lim_queue_pop(vertexes_queue);

        _FOR_(i,graph->size){
            if (graph->matrix[v][i] && dist->data[i]==-1) {
                lim_queue_push(vertexes_queue,i);

                dist->data[i]=dist->data[v]+1;
                printf("%d,",i);
            }
        }
    }
    printf("\n\n");
    lim_queue_free(vertexes_queue)
}

void bfs_lists(list_graph_t* graph,int vertex_index,numbers_t* dist){
    fill_num(dist,-1);
    list_t* vertexes_queue = list_create();
    que_insert(vertexes_queue,new(int));
    _VALUE_OF(int,vertexes_queue->tail->value) = vertex_index;

    int v,u;//next vertex
    node_t* next_vrtx;
    dist->data[vertex_index] = 0;
    int* front;

    print_vertex("%v,",graph->vertexes[vertex_index]);
    while (!que_isempty(vertexes_queue)){
        front = que_remove(vertexes_queue);
        v = _VALUE_OF(int,front);
        del(front);

        next_vrtx = graph->lists[v]->head;

        while(next_vrtx->next){
            next_vrtx = next_vrtx->next;
            u =  get_vertex_index(graph->vertexes,get_vrtx_name(next_vrtx->value),graph->size);
            if(dist->data[u]==-1){
                que_insert(vertexes_queue,new(int));
                _VALUE_OF(int,vertexes_queue->tail->value) = u;
                dist->data[u]=dist->data[v]+1;

                print_vertex("%v,",graph->vertexes[u]);
            }

        }

    }
    printf("\n\n");
    free(vertexes_queue);
}