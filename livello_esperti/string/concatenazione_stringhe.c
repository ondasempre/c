//
//  concatenazione_stringhe.c
//  esercizi
//
//  Created by flavioibanez on 18/05/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
//   aaabbaa = aaa_aab_abb_bba


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *factors(char *str, int k);      // Prototipo

int main(void) {
    char *str = "aaabbaa";
    char *s = factors(str, 3);
    int i;
    
    for(i=0; i<strlen(str)+1; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
     
    
}

char *factors(char *str, int k) {
    char *conca = NULL;               // Stringa ritornata
    int i,j,x, count=0;                   // Variabili per ciclo for e conteggio caratteri
    
    // Conto i caratteri della striga
    for(i=0; str[i]!='\0'; i++) {
         count++;
    }
    // Allocazione dinamica della memoria
    conca = (char *)malloc(sizeof(char)*count*k+1); 
    
    
    
    
    
    
 /*   for(i=0; i<count; i++) {
        conca[i]=str[i];
        }
        */
    
    return conca;
}
    
    
    
    
