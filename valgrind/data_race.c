#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>

#define N_THREADS 6

int contador = 0;

void* soma(void* ptr) {
    printf("Iniciando thread %d \n", *(int*)ptr);
    for (int i = 0; i < 1000000; i++) {
        contador++;
    }
}

int main(int argc, char const *argv[]) {
    pthread_t a[N_THREADS];

    for (int i = 0; i < N_THREADS; i++) {
        int* id = malloc(sizeof(int));
        *id = i;
        pthread_create(&a[i], NULL, soma, id);
    }

    for (int i = 0; i < N_THREADS; i++) {
        pthread_join(a[i], NULL);
    } 

    printf("Conta final : %d \n", contador);
    return 0;
}
