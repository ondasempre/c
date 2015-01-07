
/* PROGRAMMAZIONE IN C */
/* File: quadrati_perfetti.c */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    
    int numero_finale; /* numero inserito */
    int N; /* numero compreso tra 0 e "numero_finale" */
    int quadrato; /* quadrato del numero "N" */
    
    /* LEGGI UN NUMERO */
    printf("Inserisci un numero intero e positivo: ");
    scanf("%d", &numero_finale);
    
    /* VERIFICA CHE IL NUMERO INSERITO SIA POSITIVO */
    if ( numero_finale < 0 )
        printf("Errore: il numero deve essere positivo\n");
        
        else {
            /* INIZIALIZZA IL NUMERO "N" CON IL VALORE 0 */
            N = 0 ;
            /* CONSIDERA TUTTI I NUMERI TRA 0 E "numero_finale"
             E PER OGNI NUMERO CALCOLA IL QUADRATO */
            while ( N <= numero_finale ) {
                
                /* CALCOLA IL QUADRATO DEL NUMERO "N" */
                quadrato = pow(N,2);
                /* IN ALTERNTIVA EÕ POSSIBILE CALCOLARE IL
                QUADRATO di "N" COME quadrato = N * N ; */
                /* STAMPA IL RISULTATO */
                printf("\n") ;
                printf("Numero %d, Quadrato %d\n", N, quadrato);
                /* INCREMENTA IL VALORE DEL NUMERO "N" */
                N = N + 1 ;
        }
            printf("\n");        
    }
    return 0;
}