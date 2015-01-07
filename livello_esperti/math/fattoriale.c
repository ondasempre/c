/** CALCOLA FATTORIALE **/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int N; /* numero inserito */
    int fattoriale ; /* fattoriale del numero */
    
    /* LEGGI UN NUMERO */
    printf("Inserisci un numero intero positivo: ") ;
    scanf("%d", &N) ;
    
    /* VERIFICA CHE IL NUMERO INSERITO SIA POSITIVO */
    if ( N < 0 )
        printf("Errore: il numero inserito deve essere positivo\n") ;
        else
        {
            /* INIZIALIZZA IL VALORE DEL FATTORIALE */
            fattoriale = 1 ;
            
            /* IL FATTORIALE EÕ CALCOLATO COME PRODOTTO
             TRA TUTTI I NUMERI COMPRESI TRA "N" E 1 */
            while( N > 1 ) {
                
                /* AGGIORNA IL VALORE DEL FATTORIALE */
                fattoriale = fattoriale * N ;
                /* DECREMENTA IL VALORE DI "N" */
                N = N - 1 ;
                }
            
            /* STAMPA IL RISULTATO */
            printf("\n") ;
            printf("Fattoriale = %d. \n", fattoriale) ;
            }
    
    return 0;
}
