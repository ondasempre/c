#include<stdio.h>
#include<stdlib.h>

void invertiArrayIter(int *array, int size) {
    int i;
    for (i=0; i< size/2; i++) {
        int aux = array[size-i-1];
        array[size-i-1] = array[i];
        array[i] = aux;
    }
}

void invertiArrayRic(int *array, int size) {
    if (size <= 0) return;
    else {
        int aux = *array;
        *array = *(array + size - 1);
        *(array + size - 1) = aux;
        invertiArrayRic( array+1, size-2 );
    }
}

void stampaArrayRic(int *array, int size) {
    if (size == 0) { printf("\n"); return; }
    else {
        printf("%d ", *array);
        stampaArrayRic( array+1, size-1 );
    }
}

int main() {
    int size;
    //printf("Taglia array? ");
    do {
        scanf("%d", &size);
    } while(size <= 0);

        if (size > 10) {
           printf("Per motivi di sicurezza, la taglia non puo' essere > 10");
           return -1;
        }

    int *array = malloc( size * sizeof(int) );
    int i;
    //printf("Valori array? ");
    for (i=0; i<size; i++) {
        scanf("%d", (array+i));
    }

    stampaArrayRic(array, size);
    printf("Inverto (iterativa)...\n");
    invertiArrayIter(array, size);
    stampaArrayRic(array, size);
    printf("Inverto di nuovo (ricorsiva)...\n");
    invertiArrayRic(array, size);
    stampaArrayRic(array, size);
    return 0;
}
