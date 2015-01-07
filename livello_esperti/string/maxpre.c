/*** Scrivere una funzione char *maxpre(char *s1, char *s2) che ritorna in una stringa, allocata dinamicamente, 
 il più lungo prefisso della stringa s1 che appare come sottostringa della stringa s2. 
 La dimensione del blocco della stringa ritornata non deve essere più grande del necessario. 
 
 s1 = "la stringa"   s2 = "nella strada"      maxpre(s1, s2) ritorna "la str"
 s1 = "stringa"      s2 = "parola"            maxpre(s1, s2) ritorna ""
 s1 = "prefisso"     s2 = "il pref"           maxpre(s1, s2) ritorna "pref"

**/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int longestpre(char *s1, char *s2, int i);
char *maxpre(char *s1, char *s2);

int main(void) {
    
}

// Funzione ausiliaria che ritorna il più lungo
// prefisso di s1, dalla posizione i.

int longestpre(char *s1, char *s2, int i) {
    int k=0;
    while(s1[k]!='\0' && s1[k]==s2[i+k]) 
        k++;
    return k;
}


// Funzione principale a cui passo le due stringhe di caratteri
char *maxpre(char *s1, char *s2) {
    if(!s1 && !s2 ) return NULL;
    int i, max=0;
    
    for(i=0; s2[i]!='\0'; i++) {
        int pre = longestpre(s1,s2,i);
        if(pre > max) max = pre;
    }
    char *subpre = (char *)malloc(sizeof(char)*(max+1));   
    assert(subpre);
    
    for(i=0; i<max; i++) 
        subpre[i] = s1[i];
    subpre[max] = '\0';
    return subpre;
    
    
}