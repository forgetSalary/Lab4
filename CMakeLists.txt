cmake_minimum_required(VERSION 3.17)
project(GraphMatrix C)

set(CMAKE_C_STANDARD 99)

#output
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "D:/XAMPP/cgi-bin/scripts")

add_executable(GraphMatrix_C main.c modules/tools.c modules/tools.h modules/coloring.c modules/coloring.h modules/dfs.c modules/dfs.h modules/lists.c modules/lists.h modules/listsGraph.c modules/listsGraph.h modules/matrix.c modules/matrix.h modules/matrixgraph.c modules/matrixgraph.h modules/bfs.c modules/bfs.h tests.c tests.h)