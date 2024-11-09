#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *ptr = malloc(1000);
    for(int i = 0; i < 1000; i++){
        if(i % 2 == 0)
            free(ptr);
    }
    return 0;
}