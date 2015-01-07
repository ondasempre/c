/** 
 
    Sviluppo di una radice quadrata senza usare la funzione sqrt()
    contenuta nella libreria math.h 
 
 **/

#include <stdio.h>
#include <stdlib.h>
// #include <math.h>

float sqroot(float m);

int main(void) {
    int m = 25;
    printf("%.2f\n", sqroot(m));
    
    return EXIT_SUCCESS;
    
}

float sqroot(float m) {
    int j;
    float i=0;
    float x, y;
    while( (i*i) <= m )
        i+=0.1;
    x=i;
    
    for(j=0; j<10 ; j++) {

        y = m;
        y /= x;
        y += x;
        y /= 2;
        x = y;
    }
    return y;
}