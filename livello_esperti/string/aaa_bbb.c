//
// Funzione che ritorna una stringa modificata,
// precendentemente allocata dinamicamente.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int first(char *str, int i, int k);
void cat(char *dst, char *src, int i, int n);
char *factors(char *str, int k);

int main(void) {
    


int first(char *str, int i, int k) {
    char *str = 'aaabbaa';
    int x, j, h;
    for(j=0; j<i; j++) {
        h=0;
        while(h<k && str[j+h] == str[i+h]) h++;
        if(h==k) return 0;
    }
    for(x=0; x<strlen(str); x++) {
        printf("%c", str[x]);
    }
    return 1;
}

void cat(char *dst, char *src, int i, int n) {
    int h, j=strlen(dst);
    for(h=0; h<n; h++) {
        dst[j+h] = src[i+h];
    }
    dst[j+n]='\0';
}



char *factors(char *str, int k) {
    char *concat = NULL;
    int i, n=strlen(str);
    for(i=0; i<=n-k; i++) {
        if(first(str, i, k)) {
            if(concat == NULL) {
                concat = malloc(k+1);
                concat[0]='\0';
                cat(concat, str, i, k);
                
            } else {
                int len = strlen(concat);
                concat = realloc(concat, len+k+2);
                concat[len]= '_';
                concat[len+1] = '\0';
                cat(concat, str, i, k);
            }
        }
    }
    return concat;
}
}

