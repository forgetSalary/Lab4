#include "time.h"
#include "graphs/dfs.h"

#define SIZE 7

int main() {
    int size1 = SIZE;
    int begin1 = 1;

    float chance1=0.5;
    float chance2=0.3;

    const char* names[] = {"Maria","Andrew","Iren","Maxim","Den","Bob","Sam","Ivan","Steeve"};

    mtrx_grph_t* G1 = matrixGraph_create(size1,NULL,1);

    srand(time(NULL));
    init_random_symetric_matrix(G1->matrix,size1,chance1);
//    int m[5][5]={ {0, 0, 0, 0, 0},
//                  {0, 0, 1, 0, 1},
//                  {0, 1, 0, 0, 0},
//                  {0, 0, 0, 0, 1},
//                  {0, 1, 0, 1, 0}};
//
//    for (int i=0; i<5;i++){
//        memcpy(G1->matrix[i],m[i],sizeof(int)*5);
//    }
    list_graph_t* G1_lists = matrix_to_list(G1);

    print_graph(G1);

    print_list_graph(G1_lists);


    DFS_Matrix(G1,hardStack);
    printf("\n");
    DFS_Matrix(G1,virtualStack);
    printf("\n");
    DFS_Lists(G1_lists);

    return 0;
}
