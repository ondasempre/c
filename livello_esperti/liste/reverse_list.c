#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int value;
    node struct *next;
}node;

node *reverse(node *base);

int main(void) {
    
}

node *reverse(node *base) {
    node *next;
    node *current = base;  // Punta al primo elem.
    node *result = NULL;   
    
    while(current!=NULL) { // Scorre le lista la contrario.
        next=current->next;
        current->next = result;
        result = current;
        current = next;
        
    }
    return result;
}