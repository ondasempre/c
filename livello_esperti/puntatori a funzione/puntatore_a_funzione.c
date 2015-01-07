/** Esempio di puntatore a funzione **/


#include <stdio.h>

int sottrazione(int, int);
int somma(int, int);
int divisione(int, int);
int prodotto(int, int);

int main(void) {
    int i;
    int a=50, b=5;
    int risultato, scelta;
    int (*puntatore)();   // Puntatore a funzione
    for(;;) {
        printf("1\t  per la somma\n");
        printf("2\t  per la sottrazione\n");
        printf("3\t  per il prodotto\n");
        printf("4\t  per la divisione\n");
        printf("0\t  per uscire\n");
        
        scanf("%d", &scelta);
        switch(scelta) {
            case 1: puntatore = somma;
                break;
            case 2: puntatore = sottrazione;
                break;
            case 3: puntatore = prodotto;
                break;
            case 4: puntatore = divisione;
                break;
            case 0: return 0;
        }
        risultato = puntatore(a, b);
        printf("Questo è il risultato: %d\n", risultato);
        return 0;
        
    } /* fine for */
    
}


int sottrazione(int a, int b) {
    return a-b;
}

int somma(int a, int b) {
    return a+b;
}

int divisione(int a, int b) {
    return a/b;
}

int prodotto(int a, int b) {
    return a*b;
}