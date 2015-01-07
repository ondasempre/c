/** Il programma genera numeri casuali e ripete il suo ciclo fino a che
    il numero generato non corrisponde a quello inserito dall'utente **/


#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int a, t, r; 
    r = rand();  // Funzione che genera numeri casuali !
    a = -1; 
    
    printf("Questo è il numero generato: %d\n", r);
    while (a != r) { 
        printf ("Inserisci un numero: "); 
        scanf("%d",&a); 
        
        if (a != r) { 
            if (a<r) { 
                printf ("Inserisci un numero maggiore.\n"); 
            } else { 
                printf ("Inserisci un numero minore.\n"); 
            } 
        } 
    }
    return 0;
}