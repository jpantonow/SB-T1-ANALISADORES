// null_dereference.c
// error: NULLPTR_DEREFERENCE
// infer run -- gcc -c null_dereference.c

#include <stdio.h>
#include <stdlib.h>

void example_function()
{
    int *arr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * i;
    }
    printf("Example function executed\n");
}

int main()
{
    example_function();
    return 0;
}
