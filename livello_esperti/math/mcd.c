/**  ALGORITMO EUCLIDEO  **/

#include <stdio.h>

int main(void) {

    int a=10, b=5, r, mcd;
    r = a%b;        // modulo tra a e b
    while(r != 0) { // finché il predicato è vero esegue le operazioni
        a = b;
        b = r;
        r = a%b;
    }
    mcd = b;
    printf(" %d\n", mcd);
    
    return 0;

}