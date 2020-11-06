#include "lists.h"

node_t* node_create(void* value){
    node_t* node = malloc(sizeof(node_t));

    node->value = value;

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

node_t* push(node_t* tail, void* value){
    if (tail){
        tail->next = malloc(sizeof(node_t));
        tail->next->last=tail;
        tail = tail->next;


        tail->value= value;
        tail->next = NULL;
    }
    else{
        tail=node_create(value);
    }

    return tail;
}

void append(list_t* list, void* value){
    list->depth ++;

    if (list->tail){
        list->tail = push(list->tail, value);
    }
    else{
        list->tail = push(list->tail, value);
        list->head=list->tail;
    }

}

void* list_pop(list_t* list){
    list->depth--;
    if(list->tail->last){
        void* tmp_val = list->tail->value;
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

void print_list(list_t* list,const char* format){
    int list_depth=list->depth;

    node_t* next=list->head;

    if (strlen(format)>5){
        printf("Undefined format\n");
        return;
    }

    char frmt1[15]="|";
    strncat(frmt1,format,strnlen(format,3));
    strncat(frmt1,"|",2);

    if (!strchr(format,'f')){
        printf(frmt1,_VALUE_OF(intptr_t,next->value));
    }
    else{
        printf(frmt1,_VALUE_OF(double,next->value));
    }
    next=next->next;

    if (next){
        printf("->");
    }
    else{
        printf("\n");
        return;
    }

    char frmt2[20]="|";
    strncat(frmt2,format,strnlen(format,3));
    strncat(frmt2,"|->",4);

    for (int i=1; i<list_depth-1; i++){
        if (!strchr(format,'f')){
            printf(frmt2,_VALUE_OF(intptr_t,next->value));
        }
        else{
            printf(frmt2,_VALUE_OF(double ,next->value));
        }
        next=next->next;
    }

    strcpy(frmt2,"|");
    strncat(frmt2,format,strnlen(format,3));
    strncat(frmt2,"|\n",3);

    if (!strchr(format,'f')){
        printf(frmt2,_VALUE_OF(intptr_t,next->value));
    }
    else{
        printf(frmt2,_VALUE_OF(double ,next->value));
    }

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

int que_isempty(list_t* queue){
    if(queue->head==0)
        return 1;
    else
        return 0;
}

void que_insert(list_t* queue, void* value) {
    queue->tail = push(queue->tail,value);
    if(queue->head==0) {
        queue->head = queue->tail;
    }

    queue->depth ++;
}

void* que_remove(list_t* queue) {
    if(que_isempty(queue)) {
        return 0;
    }
    else{
        node_t* temp;
        void* head_value;

        head_value = queue->head->value;
        temp = queue->head;
        queue->head = queue->head->next;


        if(!queue->head){//if queue is empty now
            queue->tail=NULL;
        }
        else{
            queue->head->last = NULL;
        }

        free(temp);

        queue->depth --;
        return head_value;
    }

}