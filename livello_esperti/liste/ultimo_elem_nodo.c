#include <stdlib.h>
#include <string.h>

typedef struct Elem{
    char *str;
    struct Elem *next;
} Elem, *List;

int main(void) {
    
}




List copytail(List L, int k) {
    if (L == NULL) return L;
    Elem *copy = malloc(sizeof(Elem));    //Crea il nuovo elemento
    Elem *last = L;
    while (last->next != NULL)            //Vai all'ultimo elemento della lista
        last = last->next;
   
    //Alloca il blocco per mantenere la stringa da copiare
    copy->str = malloc((strlen(last->str) + 1)*sizeof(char));
    strcpy(copy->str, last->str);         //Copia la stringa dell'ultimo elemento
    Elem **pre = &L;
   
    while (k > 0 && *pre != NULL) {       //Vai alla locazione in cui agganciare
        pre = &((*pre)->next);            //il nuovo elemento
        k--;
    }
    copy->next = *pre;                    //Inserisci il nuovo elemento nella lista
    *pre = copy;
    
    return L;
}