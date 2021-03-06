/***

 Si consideri il seguente tipo:
 
 typedef struct Elem {
 long         val;
 char *       str;   // stringa allocata dinamicamente
 struct Elem *next;
 } Elem, *List;
 
 Scrivere una funzione List join(List A, List B) che modifica la lista A in modo tale che per ogni elemento x se x.val 
  diverso da tutti i valori dei campi val degli elementi di B allora x  eliminato da A, altrimenti il campo str di x 
 diventa la concatenazione della stringa originale con tutte le stringhe dei campi str degli elementi di B che hanno il 
 valore del campo val uguale a x.val. La funzione ritorna la lista modificata e non deve modificare la lista B. 
 Ad esempio, se le liste di input sono:
 
 A = {2, "Tara"} -> {1, "Pietra"} -> {2, "Casa"} -> {1, "Gioco"} -> {4, "Albero"}
 B = {5, "Mela"} -> {1, "Mulo"} -> {4, "Campo"} -> {1, "Erba"}
 
 allora la funzione modifica la lista A cos:
 
 {1, "PietraMuloErba"} -> {1, "GiocoMuloErba"} -> {4, "AlberoCampo"}


**/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef struct Elem{
    long val;
    char *str;
    struct Elem *next;
} Elem, *List;

List join(List A, List B);
Elem *next(long val, List L);
void print_list(List L);

int main(void) {
    Elem unoA, dueA, treA, quattroA, cinqueA, *tmpA;
    Elem unoB, dueB, treB, quattroB, *tmpB;
    unoA.val = 2;
    dueA.val = 1;
    treA.val = 2;
    quattroA.val = 1;
    cinqueA.val = 4;
    
    tmpA= &unoA;
    unoA.next = &dueA;
    dueA.next = &treA;
    treA.next = &quattroA;
    quattroA.next = &cinqueA;
    cinqueA.next = NULL;
    
    unoA.str = "Tara";
    dueA.str = "Pietra";
    treA.str = "Casa";
    quattroA.str = "Gioco";
    cinqueA.str = "Albero";
    
    unoB.val = 5;
    dueB.val = 1;
    treB.val = 4;
    quattroB.val = 1;
    tmpB = &unoB;
    unoB.next = &dueB;
    dueB.next = &treB;
    treB.next = &quattroB;
    quattroB.next = NULL;
    
    unoB.str = "Mela";
    dueB.str = "Mulo";
    treB.str = "Campo";
    quattroB.str = "Erba";
    print_list(tmpA);
    printf("-----\n");
    print_list(tmpB);
    printf("-----\n");
    List L = join(tmpA, tmpB);
    print_list(L);
    
    
    
    
    
    printf("\n");
    return EXIT_SUCCESS;
}

void print_list(List L) {
    while(L != NULL) {
        printf("%ld %s \n", L->val, L->str);
        L = L->next;
    }
    
}


// Funzione ausiliaria che ritorna il puntatore al primo elemento della lista
// L il cui valore del campo val  uguale a val. Se non c' ritorna NULL.
Elem *next(long val, List L) {
    while(L != NULL) {
        if(L->val == val) return L;
        L = L->next;
    }
    return NULL;
}

// Funzione principale
List join(List A, List B) {
    Elem *prev = NULL, *curr = A;             // Primo valore di A
    while(curr != NULL) {
        Elem *e = next(curr->val, B);
        if(e != NULL) {
            do {
                curr->str = realloc(curr->str, strlen(curr->str) + strlen(e->str)+1);
                strcat(curr->str, e->str);
                e = next(curr->val, e->next);
            }
            while(e != NULL);
            prev = curr;
            curr = curr->next;
        } else {
            e = curr->next;
            if(prev==NULL) A = e;
            else prev->next = e;
            free(curr->str);
            free(curr);
            curr = e;
        }
    }
    return A;
}













