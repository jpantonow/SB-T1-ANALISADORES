// memory_leak.c
// error: NULLPTR_DEREFERENCE
// infer run -- gcc -c memory_leak.c

#include <stdio.h>
#include <stdlib.h>

void example_function()
{
    int *arr = (int *)malloc(10 * sizeof(int));
    // Some operations with arr
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * i;
    }
    // Missing free(arr); - Memory leak here
    printf("Example function executed\n");
}

int main()
{
    example_function();
    return 0;
}
