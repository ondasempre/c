#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 5, b,c;
    int *p, **pp;
    
    p = &a;     // Assegno a p l'indirizzo di a
    pp = &p;    // Assegno a pp l'indirizzo di p
    
    b = (*p)+(*p);
    c = (**pp)*(**pp);
    printf("puntatore1: %d, puntatore2: %d \n", b, c);
    return 0;
    
}