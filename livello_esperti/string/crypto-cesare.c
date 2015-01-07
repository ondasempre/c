#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void codificaCesare(char *msg, int x);

int main(void) {
    char *msg = "ubuntu";
    codificaCesare(msg, 3);
    printf(" %s\n", msg);
    
    return 0;
    
}


// In questa versione NON sto usando la variabile 'x'
void codificaCesare(char *msg, int x) {
    
    char *nuova = (char *)malloc(sizeof(char)*strlen(msg));
    int i;
    char len;
    for (i=0, len=strlen(msg); i<len; i++) {
        if ( (msg[i]>='A' && msg[i]<='W') || (msg[i]>='a' && msg[i]<='w') ) 
        {
            // lettere dalla A alla W (maiuscole) e dalla a alla w (minuscole)
            printf("%c", msg[i] + 3);
        }
        else if (isalpha(msg[i]))
        {
            // tutte le altre lettere (X Y Z x y z)
            printf("%c", msg[i] - 23);
        }
        else 
        {
            // tutti gli altri caratteri
            printf("%c", msg[i]);
        }
    }
        
}