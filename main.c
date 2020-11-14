#include "tests.h"


int main(int argc, char* argv[]){
    system("cls");

    test_bfs_matrix(8, 0);
    test_bfs_lists(8, 0);
    test_dfs_matrix(8, 0);
    test_dfs_lists(8, 0);
    return 0;
}
