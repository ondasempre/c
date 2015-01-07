#include <stdio.h>

int main(void) {
    int *p;     // puntatore semplice
    int **pp;   // puntatore a puntatore
    int a=10;   // varibile semplice
    
    p = &a;     // p punta ad a
    pp = &p;    // pp punta a p
    printf("**p = %d ", **pp); // stampa il contenuto di a
    printf("\n");
    
    return 0;
    
}