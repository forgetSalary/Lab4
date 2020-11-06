#include "tests.h"

void test_bfs(int SIZE,int vrtx){
    mtrx_grph_t* matrix_graph = matrixGraph_create(SIZE);

    srand( time(NULL) );
    init_random_symetric_matrix(matrix_graph->matrix,SIZE,0.2);

//    int matrix[5][5] ={{0,1,0,1,0},
//                       {1,0,1,0,1},
//                       {0,1,0,0,0},
//                       {1,0,0,0,1},
//                       {0,1,0,1,0}};
//
//    _FOR_(i,5){
//        memcpy(matrix_graph->matrix[i],matrix[i],sizeof(int)*5);
//    }

    row(matrix_graph->vertexes,SIZE,0);

    print_graph(matrix_graph);
    //print_matrix(matrix_graph->matrix,matrix_graph->size);

    numbers_t* distances = numbers(SIZE);
    bfs_matrix(matrix_graph,vrtx,distances);
    bfs_log(matrix_graph->vertexes,vrtx,distances);
}

void test_bfs_lists(int SIZE,int vrtx){
    mtrx_grph_t* matrix_graph = matrixGraph_create(SIZE);

    srand( time(NULL) );
    init_random_symetric_matrix(matrix_graph->matrix,SIZE,0.2);

//    int matrix[5][5] ={{0,1,0,1,0},
//                       {1,0,1,0,1},
//                       {0,1,0,0,0},
//                       {1,0,0,0,1},
//                       {0,1,0,1,0}};
//
//    _FOR_(i,5){
//        memcpy(matrix_graph->matrix[i],matrix[i],sizeof(int)*5);
//    }


    row(matrix_graph->vertexes,SIZE,0);

    list_graph_t* list_graph = matrix_to_list(matrix_graph);

    //print_matrix(matrix_graph->matrix,matrix_graph->size);
    print_list_graph(list_graph);

    numbers_t* distances = numbers(SIZE);
    bfs_lists(list_graph,vrtx,distances);
    bfs_log(matrix_graph->vertexes,vrtx,distances);
}

void test_numbers(){
    numbers_t* nums = numbers(20);
    row(nums->data,20, 1);
    print_numbers(nums);
}