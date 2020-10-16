#include "matrixgraph.h"

int getindex(char** array, int size, char* value){
    int indx=0;

    for (int i=0; i<size;i++) {
        if (strcmp(array[i],value)==0){
            return indx;
        }
        else{
            indx++;
        }
    }

    return -1;
}

char** num_vertexes_create(int size, int begin){
    int str_size;

    char** vertexes = malloc(sizeof(char*)*size);

    for (int i=0; i<size;i++){
        str_size=(i+begin)/10+2;

        vertexes[i]=malloc(str_size);
        itoa((i+begin),vertexes[i],10);
        vertexes[i][str_size-1]='\0';
    }

    return vertexes;
}

void print_graph(mtrx_grph_t* graph){
    //header
    printf("|v%-9c|",' ');

    for (int i=0; i<graph->size; i++){
        printf("%10s|",graph->vertexes[i]);
    }
    printf("\n|");

    for (int i=0; i<graph->size; i++){

        printf("%10c|",' ');
    }
    printf("%10c|\n",' ');

    //graphs
    for (int i=0; i<graph->size; i++){
        printf("|%-10s",graph->vertexes[i]);
        for (int j=0; j<graph->size; j++){
            printf("|%10d",graph->matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

void matrixGraph_free(mtrx_grph_t* graph){
    for(int i=0; i<graph->size; i++){
        free(graph->vertexes[i]);
    }

    free(graph->vertexes);
    matrix_free(graph->matrix,graph->size);
    free(graph);
}

mtrx_grph_t* matrixGraph_create(int size, char** vertexes,...){
    va_list args;
    int* arg = &size;

    mtrx_grph_t* graph = malloc(sizeof(mtrx_grph_t));

    graph->matrix = matrix_create(size);
    graph->src = graph->matrix;

    if (vertexes==NULL){
        arg+=2;

        graph->vertexes=num_vertexes_create(size,*arg);

    }
    else{
        graph->vertexes = malloc(sizeof(char*)*size);
        int vrtx_name_len;

        for (int i=0; i<size; i++){
            vrtx_name_len=strlen(vertexes[i]);
            graph->vertexes[i]=malloc(vrtx_name_len+1);
            strcpy_s(graph->vertexes[i],vrtx_name_len+1,vertexes[i]);
        }
    }

    graph->size = size;

    return graph;
}

void remove_vrtx_memmove(mtrx_grph_t* graph, int vrtxindex){
    int data_size;

    void* dst;
    void* src;

    //удаляем строку
    data_size = (graph->size)*((graph->size)-vrtxindex);

    dst = &(graph->matrix[vrtxindex][0]);
    src = &(graph->matrix[vrtxindex+1][0]);

    intmove(dst,src,data_size);

    //удаляем столбец
    for (int i=0; i<graph->size;i++){
        dst = &(graph->matrix[i][vrtxindex]);
        src = &(graph->matrix[i][vrtxindex+1]);

        data_size=(graph->size)-vrtxindex;

        intmove(dst,src,data_size);
    }

    //удаляем название вершины
    dst = &(graph->vertexes[vrtxindex]);
    src = &(graph->vertexes[vrtxindex+1]);

    memmove(dst,src,graph->size-vrtxindex);

    graph->size--;
}

void remove_vrtx_sectors(mtrx_grph_t* graph, int vrtxindex){
    if (vrtxindex<(graph->size)/2){
        move_sector1(graph->matrix,graph->size,vrtxindex);
        move_sector2_less(graph->matrix,graph->size,vrtxindex);
        move_sector3_less(graph->matrix,graph->size,vrtxindex);

        move_matrix_pointers(graph->matrix,graph->size);
    }

    else{
        if (vrtxindex>(graph->size)/2){
            move_sector2_more(graph->matrix,graph->size,vrtxindex);
            move_sector3_more(graph->matrix,graph->size,vrtxindex);
            move_sector4(graph->matrix,graph->size,vrtxindex);

        }
        else{if(vrtxindex==0){
            move_matrix_pointers(graph->matrix,graph->size);
        }}

    }
    //удаляем название вершины
    char* dst = graph->vertexes[vrtxindex];
    char* src = graph->vertexes[vrtxindex+1];

    memmove(dst,src,graph->size-vrtxindex);

    graph->size--;
}

void add_vrtx(mtrx_grph_t* graph,const char* new_vrtx){
    int old_size=graph->size;

    graph->matrix = (int**)realloc(graph->matrix, (old_size+1) * sizeof(int*));
    graph->matrix[old_size] = (int*)malloc((old_size+1)* sizeof(int));

    for (int i = 0; i < old_size; i++){
        graph->matrix[i] = (int*)realloc(graph->matrix[i], (old_size+1)* sizeof(int));
    }

    graph->size++;
    int new_size=graph->size;

    graph->src = graph->matrix;
    graph->vertexes = realloc(graph->vertexes,sizeof(char*)*new_size);

    for (int i=0; i<new_size; i++){
        graph->matrix[new_size-1][i]=0;
        graph->matrix[i][new_size-1]=0;
    }

    int new_vrtx_len=strlen(new_vrtx)+1;
    graph->vertexes[new_size-1] = malloc(new_vrtx_len);
    strcpy_s(graph->vertexes[new_size-1],new_vrtx_len,new_vrtx);
}

