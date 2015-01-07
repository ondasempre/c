/**

 Esempio del qSort: funzione presente nella stdlib.h,
 ottimo algoritmo di ordinamento ricorsivo, simile al
 mergeSort. Anche il QuickSort usa l'approccio divide
 et impera.


**/

#include <stdlib.h>
#include <stdio.h>

int values[12] = {40, 10, 100, 90, 20, 25, 2345, 1324, 6665, 99983, 12342, 1};

int compare( const void *a, const void *b) {
    return ( *(int *)a - *(int *)b );
}

int main(void) {
    int n;
    qsort(values, 12, sizeof(int), compare);
    for(n=0; n<12; n++) {
        printf(" %d ", values[n]);
    }
    return EXIT_SUCCESS;
}