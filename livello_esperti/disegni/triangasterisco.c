/* PROGRAMMAZIONE IN C */
/* File: triangasterisco.c */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int lato; /* lato del triangolo */
    int riga, colonna; /* riga e colonna del triangolo */
    
    /* LEGGI IL LATO DEL TRIANGOLO */
    printf("Inserisci il lato del triangolo: ");
    scanf("%d", &lato);
    
    /* CONTROLLA SE IL LATO DEL TRIANGOLO EÕ UN NUMERO MAGGIORE DI 0 */
    if ( lato <=0 )
        printf("Errore, il lato deve essere maggiore di zero\n");
        else
        {
            /* IL CICLO PIUÕ ESTERNO SCANDISCE LA RIGHE DEL TRIANGOLO */
            /* INIZIALIZZA LA VARIABILE PER LA SCANSIONE DELLE RIGHE DEL
               TRIANGOLO */
            riga = 0;
            while ( riga < lato )
                {
                    /* IL CICLO PIUÕ INTERNO SCANDISCE LE COLONNE DEL TRIANGOLO */
                    /* PER OGNI RIGA STAMPA "*" SOLO SE colonna <= riga */
                    /* INIZIALIZZA LA VARIABILE PER LA SCANSIONE DELLE COLONNE DEL
                       TRIANGOLO */
                    colonna = 0 ;
                    while ( colonna <= riga )
                    {
                        /* STAMPA "*" senza andare a capo */
                        printf("*");
                        /* INCREMENTA "colonna" PER PASSARE ALLA COLONNA SUCCESSIVA */
                        colonna = colonna + 1;
                        }
                    
                    /* TERMINATA LA STAMPA DI UNA RIGA SI DEVE RIPORTARE IL CURSORE
                     AL MARGINE SINISTRO DELLO SCHERMO */
                    printf("\n");
                
                    /* INCREMENTA "riga" PER PASSARE ALLA RIGA SUCCESSIVA */
                    riga = riga + 1;
                }
        }
     return 0;
}