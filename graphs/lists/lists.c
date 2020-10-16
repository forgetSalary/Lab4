#include "lists.h"

node_t* node_create(char* value){
    node_t* node = malloc(sizeof(node_t));

    node->value = (uint8_t*)value;

    node->last = NULL;
    node->next = NULL;

    return node;
}

list_t* list_create(){
    list_t* list = malloc(sizeof(list_t));

    list->head=NULL;
    list->tail=NULL;

    list->depth = 0;

    return list;
}

node_t* push(node_t* tail, char* value){

    tail->next = malloc(sizeof(node_t));
    tail->next->last=tail;
    tail = tail->next;


    tail->value= (uint8_t*)value;
    tail->next = NULL;

    return tail;
}

void append(list_t* list, char* value){
    list->depth ++;
    if (list->tail){
        list->tail=push(list->tail, value);
    }
    else{
        list->tail=node_create(value);
        list->head=list->tail;
    }
}

uint8_t* list_pop(list_t* list){
    list->depth--;
    if(list->tail->last){
        uint8_t* tmp_val = list->tail->value;
        node_t* tmp_node = list->tail;

        list->tail=list->tail->last;
        free(tmp_node);
        list->tail->next=NULL;

        return tmp_val;
    }
    else{
        uint8_t* val;

        val = list->head->value;
        free(list->head);
        list->head=NULL;
        list->tail=NULL;

        return val;
    }
}

void print_list(list_t* list){
    int list_depth=list->depth;

    node_t* next=list->head;

    printf("|%s\t|",next->value);
    next=next->next;

    if (next){printf("->");}
    else{
        printf("\n");
        return;
    }

    for (int i=1; i<list_depth-1; i++){
        printf("|%s|->",next->value);
        next=next->next;
    }

    printf("|%s|\n",next->value);

}

void list_free(list_t* list){
    node_t* tmp;
    node_t* next = list->head;

    for (int i=0; i<list->depth; i++){
        tmp = next->next;
        free(next);
        next = tmp;
    }

    free(list);
}