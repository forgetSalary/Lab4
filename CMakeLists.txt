cmake_minimum_required(VERSION 3.17)
project(GraphMatrix C)

set(CMAKE_C_STANDARD 99)

add_executable(GraphMatrix main.c graphs/matrix/matrix.h graphs/matrix/matrix.c graphs/matrixgraph.h graphs/matrixgraph.c graphs/lists/lists.h graphs/listsGraph.h graphs/listsGraph.c graphs/lists/lists.c graphs/operations/matrix/remvrtx.c graphs/operations/matrix/remvrtx.h graphs/dfs.h graphs/dfs.c)