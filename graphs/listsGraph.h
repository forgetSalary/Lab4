#ifndef GRAPHMATRIX_LISTSGRAPH_H
#define GRAPHMATRIX_LISTSGRAPH_H

#endif //GRAPHMATRIX_LISTSGRAPH_H

#include "lists/lists.h"
#include "matrixgraph.h"

typedef struct list_graph{
    list_t** lists;
    uint8_t** vertexes;

    int size;
}list_graph_t;

list_graph_t* list_graph_create(int size);

list_graph_t* matrix_to_list(mtrx_grph_t* matrix_graph);

void print_list_graph(list_graph_t* graph);

void list_graph_free(list_graph_t* graph);