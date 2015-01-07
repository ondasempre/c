/** Esercizio da non considerare - semplice verifica del professore **/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrrchr(char *s, char c);

int main() {
    char s[100];
    char c;

    //printf("Inserire la stringa in cui cercare: ");
    scanf("%s\n", s);

    //printf("Inserire il carattere da cercare: ");
    scanf("%c", &c);

    char *uc = mystrrchr(s, c);

    printf("L'ultima occorrenza di '%c' in \"%s\" (in memoria da %p) &egrave;: %p ('%c', seguito da \"%s\")\n",
        c, s, s, uc,
        (uc==NULL?'?':*uc),
        (uc==NULL?("?"):(uc+1))
    );

    return 0;
}


char *mystrrchr(char *s, char c) {
    char *result = NULL;
    while (*s != '\0') {
        if (*s == c) result = s;
        s++;
    }
    return result;
}
