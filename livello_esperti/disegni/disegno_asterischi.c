/*
 
 Otteniamo questo tipo di figura:
 
 ****
 *  *
 *  *
 ****


*/



#include <stdio.h> 

int main() {
    
    int a, b, i, j; 
    printf ("Inserisci il lato a: "); 
    scanf("%d",&a); 
    
    printf ("Inserisci il lato b: "); 
    scanf("%d",&b); 
   
    for (i=0; i<a; i++) { 
        printf ("*"); 
    } 
    printf ("\n"); 
   
    for (i=0; i<b-2; i++) { 
        printf ("*"); 
        for (j=0; j<a-2; j++) { 
            printf (" "); 
        } 
        printf ("*\n"); 
    } 
    
    for (i=0; i<a; i++) { 
        printf ("*"); 
    } 
    printf ("\n"); 
    return 0;
}
