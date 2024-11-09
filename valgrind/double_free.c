#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *ptr = malloc(sizeof(int) * 1000);
    free(ptr);
    free(ptr);
    return 0;
}