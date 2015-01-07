#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *memstr(char word[n],int n);

int main(void) {
    char word[20] = "Alla fiera della casa!";
    printf(" %s\n", memstr(word, 22));
    return 0;
    
}


char *memstr(char word[n],int n) {
    char *new = (char *)malloc(sizeof(char)*n+1);   // Memoria allocata per la stringa di caratteri.
    strcpy(new, word);

    return new;
    
}