/***   
 
  SERIE DI FIBONACCI: 0+1+1+2+3+5+8+13....    
 
 ****/


#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N; /* numero di termini della serie */
    int nuovo_termine; /* nuovo termine della serie */
    int prec_1, prec_2; /* due termini precedenti nella serie */
    int num_termini; /* contatore per scandire i termini della serie */
    
    /* LEGGI IL NUMERO TERMINI DELLA SEQUENZA */
    printf("Inserisci il numero di termini della serie di Fibonacci: ") ;
    scanf("%d", &N);
    /* INIZIALIZZA A 1 I PRIMI DUE TERMINI DELLA SERIE */
    prec_1 = 1;
    prec_2 = 1;
    /* INIZIALIZZA A 1 IL PRIMO VALORE DELLA SERIE */
    nuovo_termine = 1;
    /* INIZIALIZZA A 0 IL CONTATORE CHE SCANDISCE I TERMINI DELLA SERIE */
    num_termini = 0 ;
    while ( num_termini < N ) {
        /* I PRIMI DUE TERMINI DELLA SERIE SONO UGUALI A 1.
         I TERMINI SUCCESSIVI SONO CALCOLATI COME SOMMA DEI DUE TERMINI PRECEDENTI */
        if ( num_termini >= 2 ) {
                
                /* CALCOLA IL NUOVO TERMINE DELLA SERIE */
                nuovo_termine = prec_1 + prec_2;
                /* AGGIORNA IL VALORE DEI DUE TERMINI PRECEDENTI NELLA SERIE */
                prec_2 = prec_1;
                prec_1 = nuovo_termine;
        }
        /* STAMPA UN NUOVO TERMINE DELLA SERIE */
        printf("%d ", nuovo_termine) ;
        /* INCREMENTA IL CONTATORE "num_termini" */
        num_termini = num_termini + 1 ;
    }
    /* RIPORTA A CAPO IL CURSORE AL TERMINE DELLA STAMPA DELLA SERIE */
    printf("\n");
    return 0;
}