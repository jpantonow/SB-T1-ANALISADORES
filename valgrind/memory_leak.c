#include <stdlib.h>
#include <stdio.h>

int main(){
    int *vector = malloc(sizeof(int)*100);
    
    for(int i = 0; i < 100; i++)
        vector[i] = i;
    
    int val = 45;

    printf("%d\n", vector[val]);

    return 0;
}