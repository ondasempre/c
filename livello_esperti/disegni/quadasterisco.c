/*
 
 a=4 b=5 (come in un asse cartesiano x, y):
 
 
 ****
 ****
 ****
 ****
 ****
 
 
 
 */

#include <stdio.h>


int main(void) {
    int a, b, i, j;
    printf("Inserisci a: ");
    scanf("%d", &b);
    printf("Inserisci b: ");
    scanf("%d", &a);
    
    for(i=0; i<a; i++) {
        for(j=0; j<b; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}