#ifndef GRAPHMATRIX_DFS_H
#define GRAPHMATRIX_DFS_H

#endif //GRAPHMATRIX_DFS_H

#include "listsGraph.h"
#include "stdbool.h"

void hardStack(mtrx_grph_t* graph, bool* visited, int v_index);
void virtualStack(mtrx_grph_t* graph, bool* visited, int v_index);

void DFS_Matrix(mtrx_grph_t* graph, void DFS(mtrx_grph_t*,bool*,int));

void DFS_Lists(list_graph_t* graph);