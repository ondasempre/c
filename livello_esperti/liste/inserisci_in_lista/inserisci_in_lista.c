#include "inserisci_in_lista.h"

// Funzione per agg nodo alla lista ordinata
Nodo *inserisci_nodo(Nodo *lista, int value) {
    Nodo *nuovo, *prev, *curr;
    
    nuovo = (Nodo *)malloc(sizeof(Nodo));
    if(!nuovo) {
        printf("Memoria esaurita !\n");
        return NULL;
    }
    nuovo->value = value;
    nuovo->next = NULL;
    prev = NULL;
    curr = lista;
    
  
    while(curr && value > (curr->value)) {      // Scorro la lista giˆ ordinata
        prev = curr;
        curr = curr->next;
    }
    if(!prev) {
        nuovo->next = lista;
        lista = nuovo;
    } else {
        prev->next = nuovo;
        nuovo->next = curr;
    }
    return lista;
    
}

// Funzione che scorre la lista e cancella il nodo selezionato
Nodo *cancella_nodo(Nodo *lista, int value) {
    Nodo *prev, *curr;                      // Puntatori di tipo Nodo
    prev = NULL;
    curr = lista;                           // Primo elemento della lista
    while(curr && value > curr->value) {    // Scorre la lista
        prev = curr;
        curr = curr->next;
    }
    // Valore non trovato
    if(!curr) {
        return lista;
    }
    if(!prev) {
        lista = lista->next;
    } else {
        prev->next = curr->next;
    }
    free(curr);                             // Libero la memoria
    curr = NULL;                            // Metto curr a NULL per sicurezza !
    return lista;                           // Ritorno il primo elem della lista
}





















