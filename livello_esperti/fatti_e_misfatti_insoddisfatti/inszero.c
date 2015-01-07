/**

Si consideri il seguente tipo:

typedef struct IElem {
    int           val;
    struct IElem *next;
} IElem, *IList;

 Scrivere una funzione IList inszero(IList L, int V[], int n) 
che presa in input una lista di interi L, un vettore di interi V 
e la sua dimensione n, modifica la lista cos“ che per ogni elemento 
x di L il cui valore appare nel vettore V viene inserito un nuovo 
elemento con valore 0 immediatamente precedente all'elemento x. 
 La funzione ritorna il puntatore alla lista modificata. 
Ad esempio, se la lista L  3 -> 2 -> 7 > 8 -> 3 e V = [7, 3, 5], 
allora la funzione modifica la lista cos“:
 
 0 -> 3 -> 2 -> 0 -> 7 -> 8 -> 0 -> 3. 


**/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef struct IElem {
    int           val;
    struct IElem *next;
} IElem, *IList;

// PROTOTIPI DI FUNZIONE:
IList inszero(IList L, int V[], int n);

int main(void) {
    
}

IList inszero(IList L, int V[], int n) {
    int zero=0;
    if(!L) return L;
    IElem **p = &L;
    while(n>0 && *p!=NULL) {
        int i;
        for(i=0; i<n; i++) {
            if(V[i] == (*p)->val) {
                *p = malloc(sizeof(IElem));
                (*p)->val = zero;
                p = &((*p)->next);
            }
        }
        *p = (*p)->next;
        return L;
    }
}






















