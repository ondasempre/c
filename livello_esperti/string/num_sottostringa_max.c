/* Ritorna la lunghezza massima della sottostringa palindroma */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Funzione ausiliaria che rivela se la stringa è palindroma
int ispal(char *str, int i, int j);   
int subpal(char *str);


int main(void) {
    char str[18] = "usa radar astrali";
    int i = subpal(str);
    printf(" %d\n ", i);
    
    return EXIT_SUCCESS;
}

int ispal(char *str, int i, int j) {
    while(i<j) {
        if(str[i] != str[j]) return 0;
        i++;
        j++;
    }
    return 1;
}

int subpal(char *str) {
    int i, j, max=0;
    for(i=0; str[i] != '\0'; i++) {
        for(j=0; str[j] != '\0'; j++) {
            if(j-i+1>max && ispal(str, i, j)) 
                max = j-i+1;
                return max;
        }
    }
}