#include "tests.h"

void test_dfs_matrix(int SIZE, int vrtx){
    printf("DFS distances, matrix graph\n");
    mtrx_grph_t* matrix_graph = matrixGraph_create(SIZE);
    srand( time(NULL) );

    init_random_symetric_matrix(matrix_graph->matrix,SIZE,0.5);

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

    //print_matrix(stdout,matrix_graph->matrix,matrix_graph->size,',');

    numbers_t* distances = numbers(SIZE);

    printf("Depth-first search from '%d'\n",vrtx);
    dfs_matrix(matrix_graph,vrtx,distances);
    dist_log(matrix_graph->vertexes,vrtx,distances);
}

void test_dfs_lists(int SIZE, int vrtx){
    printf("\nDFS distances, lists graph\n");
    mtrx_grph_t* matrix_graph = matrixGraph_create(SIZE);

    srand( time(NULL) );
    init_random_symetric_matrix(matrix_graph->matrix,SIZE,0.5);

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

    //print_matrix(stdout,matrix_graph->matrix,matrix_graph->size,',');
    print_list_graph(list_graph);

    //print_matrix(stdout,matrix_graph->matrix,matrix_graph->size,',');

    numbers_t* distances = numbers(SIZE);

    printf("Depth-first search from '%d'\n",vrtx);
    dfs_lists(list_graph,vrtx,distances);
    dist_log(matrix_graph->vertexes,vrtx,distances);
}

void test_bfs_matrix(int SIZE,int vrtx){
    printf("\nBFS distances, matrix graph\n");
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

    //print_matrix(stdout,matrix_graph->matrix,matrix_graph->size,',');

    numbers_t* distances = numbers(SIZE);

    printf("Breadth-first search from '%d'\n",vrtx);
    //printf("Custom queue\n");
    clock_t start_time, finish_time;

    start_time=clock();
    bfs_matrix(matrix_graph,vrtx,distances);
    finish_time=clock();

    double wait_time = (double)(finish_time - start_time) / CLOCKS_PER_SEC;
    printf("Time:%f s\n",wait_time);

    dist_log(matrix_graph->vertexes,vrtx,distances);
//
//    FILE* output = fopen(PATH"Queue test\\matrix.test","w");
//    print_matrix(output,matrix_graph->matrix,matrix_graph->size,' ');
//    fclose(output);

    free(distances->data);
    free(distances);
}

void test_bfs_lists(int SIZE,int vrtx_index){
    printf("\nBFS distances, lists graph\n");
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

    //print_matrix(stdout,matrix_graph->matrix,matrix_graph->size,',');
    print_list_graph(list_graph);

    numbers_t* distances = numbers(SIZE);

    printf("Breadth-first search from ");
    print_vertex("'%v'\n",list_graph->vertexes[vrtx_index]);

    //printf("Custom queue\n");

    bfs_lists(list_graph,vrtx_index,distances);
    dist_log(matrix_graph->vertexes,vrtx_index,distances);
}

void test_vertex(){
    list_t* list = list_create();

    vertex array[]={
            {1,1},
            {2,2},
    };

    append(list,&array[0]);
    append(list,&array[1]);

    print_list(list,"%v");
    print_list(list,"%v");
    print_list(list,"%v");

    list_free(list);
}

void test_numbers(){
    numbers_t* nums = numbers(20);
    row(nums->data,20, 1);
    print_numbers(nums);
}