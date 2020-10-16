#ifndef GRAPHMATRIX_LISTS_H
#define GRAPHMATRIX_LISTS_H

#endif //GRAPHMATRIX_LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct node{
    uint8_t* value;

    struct node* last;
    struct node* next;
}node_t;

typedef struct list{
    node_t* head;
    node_t* tail;

    int depth;

}list_t;

node_t* push(node_t* tail, char* value);

uint8_t* list_pop(list_t* list);

list_t* list_create();

void append(list_t* list, char* value);

void print_list(list_t* list);

void list_free(list_t* list);