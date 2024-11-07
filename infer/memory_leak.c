// memory_leak.c
// error: MEMORY_LEAK_C
// infer run -- gcc -c memory_leak.c

#include <stdio.h>
#include <stdlib.h>

void conditional_memory_leak(int flag)
{
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        return;
    }
    if (flag)
    {
        free(arr); // Memory freed only if flag is set
    }
    // If flag is not set, arr is leaked
    printf("Function executed\n");
}

int main()
{
    // arr is not freed here, causing a leak
    conditional_memory_leak(0);
    return 0;
}
