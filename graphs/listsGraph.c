#include "listsGraph.h"

list_graph_t* list_graph_create(int size){
    list_graph_t* graph = malloc(sizeof(list_graph_t));

    graph->lists = malloc(sizeof(list_t*)*size);
    graph->vertexes = malloc(sizeof(uint8_t*)*size);

    return graph;
}

list_graph_t* matrix_to_list(mtrx_grph_t* matrix_graph){
    int size = matrix_graph->size;

    list_graph_t* list_graph = list_graph_create(size);

    list_t* nextList;
    node_t* nextVertex;

    list_graph->size=size;

    int vrtx_name_len;

    for (int i=0; i<size; i++){
        vrtx_name_len = strlen(matrix_graph->vertexes[i]);

        list_graph->vertexes[i]=malloc(vrtx_name_len+1);
        strcpy_s((char*)(list_graph->vertexes[i]),vrtx_name_len+1,matrix_graph->vertexes[i]);

        list_graph->lists[i] = list_create();
        append(list_graph->lists[i],(char*)list_graph->vertexes[i]);
    }


    for (int i=0; i<size; i++){
        nextList = list_graph->lists[i];

        for (int j=0; j<size; j++){
            if (matrix_graph->matrix[i][j]){
                append(nextList,matrix_graph->vertexes[j]);
            }
        }

    }

    return list_graph;
}

void print_list_graph(list_graph_t* graph){
    for (int i=0; i<graph->size; i++) {
        print_list(graph->lists[i]);
    }
    printf("\n");
}

void list_graph_free(list_graph_t* graph){
    for (int i=0; i<graph->size; i++){
        list_free(graph->lists[i]);
    }
    MATRIX_FREE(graph->vertexes,graph->size)

    free(graph);
}