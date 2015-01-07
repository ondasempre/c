/** Radice quadrata con sqrt **/

#include <stdio.h> 
#include <math.h> 

int main() {
    
    int i, a, max, somma; 
    float r; 
    max = 0; 
    
    for (i=0; i<5; i++) { 
        printf ("Inserisci un numero: "); 
        scanf("%d",&a); 
        if (max < a) { 
            max = a; 
        } 
        somma += a; 
    } 
    
    r = somma / 5; 
    
    printf ("Il valore massimo inserito : %d\n", max); 
    printf ("La radice quadrata della somma : %.3f\n",sqrt(somma)); 
    printf ("La media : %.3f\n", r); 
    return 0;
}
