#include <stdlib.h>
#include <stdio.h>

int main(){
    int *vetor = malloc(sizeof(int)*100);
    
    for(int i = 0; i < 100; i++)
        vetor[i] = i;
    
    int val = 45;

    printf("%d\n", vetor[val]);

    return 0;
}