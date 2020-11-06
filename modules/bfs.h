#ifndef GRAPHMATRIX_BFS_H
#define GRAPHMATRIX_BFS_H

#endif //GRAPHMATRIX_BFS_H

#ifndef GRAPHMATRIX_LISTSGRAPH_H
#include "listsGraph.h"
#endif

#ifndef GRAPHMATRIX_TOOLS_H
#include "tools.h"
#endif

void bfs_matrix(mtrx_grph_t* graph,int vertex_index,numbers_t* dist);

void bfs_lists(list_graph_t* graph,int vertex_index,numbers_t* dist);

void bfs_log(int* vertexes, int src_vertex, numbers_t* dist);