#include<stdio.h>
#include<stdlib.h>

#define ARRAY_SIZE 1298534880

int main(){
    int *array = (int *)malloc(ARRAY_SIZE * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Allocated %ld bytes for array\n", ARRAY_SIZE * sizeof(int));

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i * 10;
    }

    for (size_t i = 0; i < ARRAY_SIZE; i++) {
        printf("Element %ld: %d\n", i, array[i]);
    }

    while (1)
    {
    }
    

    free(array);    
}