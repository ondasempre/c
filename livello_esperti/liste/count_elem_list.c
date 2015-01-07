#include <stdio.h>
#include <stdlib.h>

typedef struct Elem {
    int value;
    struct Elem *next;
} Elem, *List;

int eq(List L);

int main(void) {
        
}

// Semplice funzione che conta i nodi
// presenti nella lista.
int eq(List L) {
    int count = 0;      // Contatore
    if(!L) return 0;    // Controllo
    Elem *v = L;        // Valore di inizio
    while(v!=NULL) {    // Scorro la lista
        count++;        
        v = v->next;    // Incremento nodo
    }
    return 0;
}


