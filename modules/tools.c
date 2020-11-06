#include "tools.h"

array_t* array_create(size_t value_size,size_t data_size){
    array_t* arr = new(array_t);
    arr->data = malloc(value_size*data_size);

    arr->value_size = value_size;
    arr->data_size = data_size;

    return arr;
}

void* get_value(array_t* arr, unsigned int index){
    if (index<arr->data_size && index>0){
        uint8_t* ptr_to_value = arr->data;
        ptr_to_value+=arr->value_size*index;
        return ptr_to_value;
    }
    else{
        assert("Index is out of range");
        return NULL;
    }
}

numbers_t* numbers(int size){
    numbers_t* arr = new(numbers_t);
    arr->data = new_block(int,size);
    arr->size = size;

    return arr;
}

void numbers_free(numbers_t* arr){
    free(arr->data);
    free(numbers);
}

int numbers_get_index(numbers_t* array, int num){
    _FOR_(i,array->size){
        if (array->data[i] == num){
            return i;
        }
    }
    return -1;
}

void print_numbers(numbers_t* arr){
    _FOR_(i,arr->size-1){
        printf("%d,",arr->data[i]);
    }
    printf("%d\n",arr->data[arr->size-1]);
}

void fill_num(numbers_t* arr,int value){
    _FOR_(i,arr->size){
        arr->data[i]=value;
    }
}

int bytescmp(char* _buf1,char* _buf2,size_t size){
    int count = 0;

    for (int i=0; i<size; i++){
        if (_buf1[i] == _buf2[i]){
            count++;
        }
    }

    if (count==size){
        return 0;
    }
    else{
        return 1;
    }
}


int get_index_from_exact_value(char* array, int size, void* value, size_t value_size){
    int index=0;

    for (int i=0; i<size;i++) {
        if (bytescmp(array,(char*)value,value_size)==0){
            return index;
        }
        else{
            index++;
        }
        array += value_size;
    }

    return -1;
}
int get_index_from_ptr(char** array, int size, void* value, size_t value_size){
    int index=0;

    for (int i=0; i<size;i++) {
        if (bytescmp(array[i],(char*)value,value_size)==0){
            return index;
        }
        else{
            index++;
        }
    }

    return -1;
}


int get_index(char value_is_ptr,void* array, int size, void* value, size_t value_size){
    int index;
    if (value_is_ptr){
        index=get_index_from_ptr((char**)array,size,value,value_size);
    }
    else{
        index=get_index_from_exact_value((char*)array,size,value,value_size);
    }

    return index;
}

void row(int* array,int size, int begin){
    for (int i=0; i<size;i++){
        array[i]=i+begin;
    }
}


void intmove(int* dst, int* src, int size){
    for (int i=0;i<size;i++){
        *(dst+i)=*(src+i);
    }
}

int one_or_zero(float chance){
    int a = rand()%100;

    int result;

    if ((float)a<(100*chance)){
        result = 1;
    }
    else{
        result = 0;
    }

    return result;
}

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
