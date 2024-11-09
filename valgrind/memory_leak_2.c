#include <stdio.h>
#include <stdlib.h>

int main(){
    int *data;
    size_t size = sizeof(int) * 2048 * 1000000;
    int i = 0;
    while(1){
        data = malloc(size);
        if(data == (NULL))
            break;
        i++;
        printf("%d\n",i);
    }
    printf("no more memory available\n");
}