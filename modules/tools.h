#ifndef GRAPHMATRIX_TOOLS_H
#define GRAPHMATRIX_TOOLS_H

#endif //GRAPHMATRIX_TOOLS_H

#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#define _VALUE_OF(type,pointer)      *((type*)pointer)
#define new(type)                   malloc(sizeof(type))
#define new_const(type,value)       &((type){value})
#define new_block(type,how_much)    malloc(sizeof(type)*how_much)
#define del(ptr)                    free(ptr)

#define _FOR_(index,range)          for(int index=0;index<range;index++)

typedef struct rgb_s{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
}rgb_t;

typedef struct array_s {
    void* data;
    size_t value_size;
    size_t data_size;
}array_t;

typedef struct numbers_s {
    int* data;
    size_t size;
}numbers_t;

int bytescmp(char* _buf1,char* _buf2,size_t size);

int get_index(char value_is_ptr,void* array, int size, void* value, size_t value_size);

array_t* array_create(size_t value_size,size_t data_size);

numbers_t* numbers(int size);

void print_numbers(numbers_t* arr);

int numbers_get_index(numbers_t* array, int num);

void row(int* array,int size, int begin);

void* get_value(array_t* arr, unsigned int index);

void fill_num(numbers_t* arr,int value);

void intmove(int* dst, int* src, int size);

int one_or_zero(float chance);

int fst_false(bool* arr,int size);

