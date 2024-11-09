#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    void* a[400];

    for (size_t j = 0; j < 5; j++)
    {
        for (size_t i = 0; i < 400; i++)
        {
            a[i] = malloc(4);
        }

        for (size_t i = 0; i < 400; i++)
        {
            free(a[i]);
        }
    }

    return 0;
}