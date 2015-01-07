#include <stdio.h>
#include <stdlib.h>

// Prototipo di funzione
void vettore_ord(int A[], int n);

int main(void) {
    
    int A[6]={1,2,3,4,5,6}; // Array
    vettore_ord(A, 6);      // Richiamo alla funzione vettore_ord()
    
    return EXIT_SUCCESS;

}


void vettore_ord(int A[], int n) {
    int i;
    if(!A) return;
    for(i=0; i<n; i++) {
        if(A[i]>A[++i]) {
            printf("ops!!! vettore non ordinato.\n");
            return;
        }
    }
    printf("vettore ordinato.\n");
}