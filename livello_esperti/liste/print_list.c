
//
//  Sia data la seguente definizione del tipo Node, per la rappresentazione di liste collegate di interi.
//
//  struct node {
//	int info;
//	struct node *nextPtr;
//  };
//  typedef struct node Node;
//  Scrivere una funzione void printList(Node *list) che stampi su schermo
//  il contenuto della lista passata come argomento.
//

#include <stdio.h>
#include <stdlib.h>


struct _node {
    int info;
    struct _node *next;
    
};

typedef struct _node node;
void printList(node *list);

int main(void) {
    node uno, due, tre;
    uno.info = 1;
    due.info = 2;
    tre.info = 3;
    
    uno.next = &due;
    due.next = &tre;
    tre.next = NULL;    

    
    printList(&uno);
    
    return EXIT_SUCCESS;
    
    
}

void printList(node *list) {
    
    node *n = list;
    while(n) {
        printf("%d\n",n->info);
        n=n->next;
    }
    printf("\n");
}

