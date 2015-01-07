 
#include <stdio.h>
#include <stdlib.h>

struct __nodo{
    int value;
    struct __nodo *next;
};

typedef struct __nodo Nodo;

Nodo *inserisci_nodo(Nodo *lista, int value);
Nodo *cancella_nodo(Nodo *lista, int value);