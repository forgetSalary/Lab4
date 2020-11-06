#ifndef GRAPHMATRIX_DFS_H
#define GRAPHMATRIX_DFS_H

#endif //GRAPHMATRIX_DFS_H

#ifndef GRAPHMATRIX_LISTGRAPH_H
#include "listsGraph.h"
#endif

#ifndef GRAPHMATRIX_TOOLS_H
#include "tools.h"
#endif

void dfs_hardStack(mtrx_grph_t* graph, bool* visited, int v_index);
void dfs_virtualStack(mtrx_grph_t* graph, bool* visited, int v_index);

void components_dfs_Matrix(mtrx_grph_t* graph, void DFS(mtrx_grph_t*,bool*,int));

void components_dfs_Lists(list_graph_t* graph);