/***
 
Scrivere una funzione int charcount(char *sA[], int n, char c) che ritorna il 
numero totale di occorrenze del carattere c in tutte le stringhe dell'array sA. 
Ad esempio, se sA = {"rosso", "verde", "giallo", "grigio"} e c = 'o', 
la funzione ritorna 4.
 
 ps. prova anche a cambiare caratere !
 
**/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Prototipo di funzione
int charcount(char *sA[], int n, char c);

int main(void) {
    // Matrice di stringhe
    char *sA[] = {"rosso", 
                  "verde", 
                  "giallo", 
                  "grigio"};
    
    // Richiamo la funzione charcount()
    int ris = charcount(sA, 4, 'i');
    printf(" %d\n", ris);
    
    return 0;
}

// Funzione charcount(matrice, lunghezza matrice, carattere da cercare)
int charcount(char *sA[], int n, char c) {
    if(!sA) return 0;           // if di controllo
    int i, j, count = 0;        // variabile di conteggio e indici
    for(i=0; i<n; i++) {        // Uso due for per scorrere la matrice
        for(j=0; sA[i][j]!= '\0'; j++)
            if(sA[i][j] == c) count ++;
    }        
    return count;        
}











