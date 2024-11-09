#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr = malloc(sizeof(int) * 5);
    ptr[5] = 42;
    printf("%d",ptr[5]);
    free(ptr);
}