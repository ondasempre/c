#include <stdio.h>

int doubleof(int x);

int main(void) {
    int (*nomefunzione)(int);
    nomefunzione = doubleof;
    
    int i;
    for(i=0; i<5; i++) {
        printf("%d.valore = %d ", i+1, nomefunzione(i));
        printf("\n");
    }
    return 0;
}




int doubleof(int x) {
    return x*2;
}