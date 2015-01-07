/**

 Si consideri il seguente tipo:
 
 typedef struct Num {
 float       value;
 struct Num* next;
 } Num, *NList;
 
 Scrivere una funzione NList delsup(NList L) che elimina dalla lista L il primo elemento il cui valore (il campo value)
  maggiore od uguale ai valori di tutti gli elementi che lo seguono nella lista. La funzione ritorna la lista modificata 
 e non deve creare nuovi elementi. Ad esempio, se la lista L  2 -> 5 -> 1.3 -> 5 -> 4 allora la lista modificata dalla 
 funzione  2 -> 1.3 -> 5 -> 4, se invece L  2 -> 5 -> 4 -> 6 allora la lista modificata  2 -> 5 -> 4. 

**/

#include <stdio.h>
#include <stdio.h>

typedef struct Num{
    float value;
    struct Num *next;
}Num, *NList;

// PROTOTIPI DI FUNZIONE    
NList delsup(NList L);
int sup(NList L);


int main(void) {
    
}

// Funzione ausiliaria che ci dice se il nodo  maggiore 
// o uguale ai valori di tutti gli elem che lo seguono.
int sup(NList L) {
    if(!L) return 0;
    float v = L->value;
    while(L != NULL) {
        if(L->value > v)
            return 0;
        L = L->next;
    }
    return 1;
}


NList delsup(NList L) {
    if(!L) return L;
    Num *curr = L;      // Primo elem della lista
    if(sup(L)) {        // 
        L = L->next;
        free(curr);
        return L;
    }
    while(!sup(curr->next)) curr = curr->next;
    Num *next = curr->next;
    curr->next = next->next;
    free(curr);
    curr = NULL;
    
    return L;
}














