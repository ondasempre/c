/***

 Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
 interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
 vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
 numeri, l’utente inserisce un valore di riferimento. Il programma deve indicare se tale
 valore di riferimento è contenuto nel vettore.

***/


#include <stdio.h>
#include <stdlib.h>


int main(void) {

    const int MAXN = 30;
    int i, j, N, x;
    int array[MAXN];
    int flag=0;
    
    // Inserisci il valore di N
    printf("Inserisci il numeri di elementi del vettore (max30): ");
    scanf("%d", &N);
    for(i=0; i<N; i++) {
        printf("%d valore: ", i+1);
        scanf("%d", &array[i] );
    }
    printf("\nARRAY INSERITO: ");
    for(i=0; i<N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Ricerca all'interno dell'array
    printf("Inserisci il valore da cercare nel vettore: ");
    scanf("%d", &x);
    for(j=0; j<N; j++) {
        if(array[j]==x) flag=1;
    }
    if(flag==1) printf("Valore presente nel vettore!\n");
    else printf("Il valore non è presente...riprova\n");
    // exit
    return 0;
}