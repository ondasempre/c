/** questo ritorna una stringa modificata del tipo aaa_baa_ab ***/


#include <stdlib.h>

#include <string.h>
#include <stdio.h>

int main(void) {
	
	char str[] = "aaabaaab";
    char *fatt;
	printf("%s\n", fatt=factors(str,8) );
	
    return EXIT_SUCCESS;
}

/* Funzione ausiliaria che ritorna 1 se la sottostringa di str che inizia nella
 * posizione i (ed e' lunga k) e' la prima occorrenza di tale sottostringa in str,
 * altrimenti ritorna 0. */
int first(char *str, int i, int k) {
    int j, h;
    for (j = 0 ; j < i ; j++) {
        h = 0;
        while (h < k && str[j + h] == str[i + h]) h++;
        if (h == k) return 0;
    }
    return 1;
}

/* Funzione ausiliaria che concatena alla stringa dst gli n caratteri della stringa
 * src che iniziano nella posizione i. */
void cat(char *dst, char *src, int i, int n) {
    int h, j = strlen(dst);
    for (h = 0 ; h < n ; h++)
        dst[j + h] = src[i + h];
    dst[j + n] = '\0';
}

char *factors(char *str, int k) {
    char *concat = NULL;
    int i, n = strlen(str);
    for (i = 0 ; i <= n - k ; i++) {
        if (first(str, i, k)) {
            if (concat == NULL) {
                concat = malloc(k + 1);
                concat[0] = '\0';
                cat(concat, str, i, k);
            } else {
                int len = strlen(concat);
                concat = realloc(concat, len + k + 2);
                concat[len] = '_';
                concat[len + 1] = '\0';
                cat(concat, str, i, k);
            }
        }
    }
    return concat;
}
