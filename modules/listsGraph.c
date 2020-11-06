#include "listsGraph.h"

int is_adjacent(list_graph_t* graph, int v, int u){
    int adjacency;

    for (int i=0; i<graph->size; i++){

    }

    return adjacency;
};

list_graph_t* list_graph_create(int size){
    list_graph_t* graph = malloc(sizeof(list_graph_t));

    graph->lists = malloc(sizeof(list_t*)*size);
    graph->vertexes = malloc(sizeof(int)*size);
    graph->colors = malloc(sizeof(rgb_t));
    graph->size = size;

    return graph;
}

list_graph_t* matrix_to_list(mtrx_grph_t* matrix_graph){
    int size = matrix_graph->size;

    list_graph_t* list_graph = list_graph_create(size);

    list_t* nextList;

    for (int i=0; i<size; i++){
        list_graph->vertexes[i] = matrix_graph->vertexes[i];
        list_graph->lists[i] = list_create();
        append(list_graph->lists[i],&(matrix_graph->vertexes[i]));
    }

    for (int i=0; i<size; i++){
        nextList = list_graph->lists[i];

        for (int j=0; j<size; j++){
            if (matrix_graph->matrix[i][j]){
                append(nextList,&(matrix_graph->vertexes[j]));
            }
        }

    }

    return list_graph;
}

void print_list_graph(list_graph_t* graph){
    for (int i=0; i<graph->size; i++) {
        print_list(graph->lists[i],"%d");
    }
    printf("\n");
}

void list_graph_free(list_graph_t* graph){
    for (int i=0; i<graph->size; i++){
        list_free(graph->lists[i]);
    }

    free(graph);
}

//methods

void bfs(int vertex_index,numbers_t* dist){

}
