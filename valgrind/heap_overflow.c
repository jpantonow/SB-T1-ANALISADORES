#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
    int i;
    int *a = malloc(sizeof(int)*10);
    if(!a)
        return -1;

    for(i = 0; i < 11; i++)
        a[i] = i;
    
    for(i=0;i<10;i++)
        a[i] *= a[i];

    free(a);
/*
    Invalid write of size 4: 
        trying to write 4 bytes (int) to invalid memory location.
        you are trying to access a[10], one position past the end of allocated array
        a[0]..a[9]
*/
    return 0;
}