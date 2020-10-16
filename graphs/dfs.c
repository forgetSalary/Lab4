#include "dfs.h"

#define _PTR_VAL(value_type,pointer) *((value_type*)pointer)

int fst_false(bool* arr,int size){
    int count=0;

    while (arr[count] && count<size){
        count++;
    }
    if (count==size){
        return -1;
    }
    else{
        return count;
    }

}

void hardStack(mtrx_grph_t* graph, bool* visited, int v_index){
    visited[v_index]=true;
    printf("%s,",graph->vertexes[v_index]);
    for (int i=0; i<graph->size; i++){
        if (graph->matrix[v_index][i] && !visited[i]){
            hardStack(graph,visited, i);
        }
    }

}

void virtualStack(mtrx_grph_t* graph, bool* visited, int v_index){
    list_t* vrtx_stack = list_create();
    list_t* cycle_states_stack = list_create();

    int i=0;
    int current_v_index=v_index;

    visited[v_index]=true;
    printf("%s,",graph->vertexes[v_index]);

    for (i; i<graph->size; i++){
        if (graph->matrix[v_index][i] && !visited[i]){
            printf("%s,",graph->vertexes[i]);
            visited[i]=true;

            append(vrtx_stack,malloc(sizeof(int)));
            append(cycle_states_stack,malloc(sizeof(int)));

            _PTR_VAL(int,cycle_states_stack->tail->value)=i;
            _PTR_VAL(int,vrtx_stack->tail->value)=v_index;

            current_v_index=i;
            i=-1;
        }

        v_index = current_v_index;

        if ((i+1)==graph->size){
            if (cycle_states_stack->tail){
                i = _PTR_VAL(int,list_pop(cycle_states_stack))-1;
                current_v_index= _PTR_VAL(int,list_pop(vrtx_stack));

                v_index = current_v_index;
            }
        }
    }
}

void hardStack_lists(list_graph_t* graph, bool* visited, int v_index){
    node_t* next = graph->lists[v_index]->head;
    int next_index;

    visited[v_index]=true;
    printf("%s,",graph->vertexes[v_index]);
    for (int i=0; i<graph->lists[v_index]->depth; i++){
        next_index=getindex((char **) graph->vertexes, graph->size, (char *) next->value);
        if (!visited[next_index]) {
            visited[v_index]=true;
            hardStack_lists(graph, visited, next_index);
        }
        next = next->next;
    }
}

void DFS_Matrix(mtrx_grph_t* graph, void DFS(mtrx_grph_t*,bool*,int)){
    bool* visited=calloc(graph->size,1);

    int next_index=0;
    while (next_index!=-1){
        DFS(graph,visited,next_index);
        next_index=fst_false(visited,graph->size);
        printf("\n");
    }
    free(visited);

}

void DFS_Lists(list_graph_t* graph){
    bool* visited=calloc(graph->size,1);

    int next_index=0;
    while (next_index!=-1){
        hardStack_lists(graph,visited,next_index);
        next_index=fst_false(visited,graph->size);
        printf("\n");
    }
    free(visited);
}
