#include <stdio.h>
#include <stdlib.h>

struct elemento {
    int inf;
    struct elemento *next;
};

struct elemento *crea_lista();
void visualizza_lista(struct elemento *);


int main(void) {
    struct elemento *lista;
    lista = crea_lista();
    visualizza_lista(lista);
}


struct elemento *crea_lista() {
    struct elemento *p, *punt;
    int i, n;
    printf("Specificare il numero di elem: \n");
    scanf("%d", &n);

    if(n==0) {
        p=NULL;
    } else {
        // Creazione primo elem
        p = (struct elemento *)malloc(sizeof(struct elemento));
        printf("Inserisci il primo valore: \n");
        scanf("%d", &p->inf);
        punt=p;
        
    }
    for(i=2; i<=n; i++) {
        punt->next = (struct elemento *)malloc(sizeof(struct elemento));
        punt = punt->next;
        printf("Inserisci il %d elemnto: \n", i);
        
    }
    punt->next=NULL;
    return(p);
}



void visualizza_lista(struct elemento *p) {
    printf(" ----> ");
    // Ciclo di scansione
    while(p!=NULL) {
        printf("%d", p->inf);
        printf(" ---> ");
        p = p->next;
    }
    printf("NULLnn");
}









