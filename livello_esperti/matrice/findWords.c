/** Implementare una funzione int *findwords(int n, char L[n][n], char *W[], int nw) che prende in input una matrice L di nxn caratteri alfabetici maiuscoli ('A','B',...,'Z') e un vettore W di nw stringhe (ognuna delle quali contiene una parola in lettere maiuscole), e ritorna un vettore C, allocato dinamicamente, che per ogni parola del vettore W conta il numero di volte che appare nella matrice L scritta in orizzontale o in verticale. Quindi, il vettore ritornato C deve avere dimensione nw e per ogni i, C[i] deve essere uguale al numero di volte che la parola W[i] appare in L. Ad esempio, se n = 10, la matrice L e il vettore W (nw = 4) sono: **/

#include<stdio.h>
#include<stdlib.h>

/* Auxiliary function: returns 1 if string w occurs horizontally in matrix L
 * from position (r,c).
 */
int checkwordH(int n, char L[n][n], int r, int c, char *w) {
    int i = 0;
    while (c < n && w[i] == L[r][c]) {
        c++;
        i++;
    }
    return (w[i] == '\0');
}

/* Auxiliary function: returns 1 if string w occurs vertically in matrix L
 * from position (r,c).
 */
int checkwordV(int n, char L[n][n], int r, int c, char *w) {
    int i = 0;
    while (r < n && w[i] == L[r][c]) {
        r++;
        i++;
    }
    return (w[i] == '\0');
}


int *findwords(int n, char L[n][n], char *W[], int nw) {
    int *C = malloc(nw*sizeof(int));
    int i, r, c;
    for (i = 0 ; i < nw ; i++) {
        C[i] = 0;
        for (r = 0 ; r < n ; r++) {
            for (c = 0 ; c < n ; c++) {
                if (checkwordH(n, L, r, c, W[i])) C[i]++;
                if (checkwordV(n, L, r, c, W[i])) C[i]++;
            }
        }
    }
    return C;
}





int main() {
/*  char L[10][10] =
                 {{'L','B','A','R','B','A','R','B','A','C'},
                  {'G','U','O','V','B','L','U','N','A','L'},
                  {'C','H','N','N','D','U','B','N','T','R'},
                  {'B','A','R','A','I','N','H','T','U','V'},
                  {'W','B','A','R','B','A','I','U','V','X'},
                  {'Y','Z','Z','A','V','I','L','L','M','Y'},
                  {'N','N','T','L','R','M','M','C','C','B'},
                  {'K','J','L','U','N','A','R','E','D','G'},
                  {'J','G','H','N','N','M','I','U','T','R'},
                  {'B','B','R','A','D','O','A','N','U','L'}};

       char *W[4] = {"LUNA","BARBA","BARBE","LUNARE"};
*/
        printf("Reading data, in the form:nnum_matrix_rows num_matrix_colsnmatrix_row_by_rownnw word_1 ... word_nwn");
        int n;
        //printf("n? ");
        scanf("%d", &n);
        char L[n][n];
        int i,j;
        //printf("Matrix?n");
        for (i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                do {
                    scanf("%c", &L[i][j]);
                // Skips any character except uppercase letters
                } while (! (L[i][j] >= 'A' && L[i][j] <= 'Z') );
            }
        }

        int nw;
        //printf("nw? ");
        scanf("%d", &nw);
        char *W[nw];
        for(i=0; i<nw; i++) {
            //printf("Word %d? ", i);
            W[i] = malloc((n+1)*sizeof(char));
            scanf("%s", W[i]);
        }

        printf("Matrix (%dx%d) read:n", n, n);
        for(i=0; i<n; i++) {
            for(j=0; j<n; j++) {
                printf("%c ", L[i][j]);
            }
            printf("n");
        }

        printf("Looking for the following %d words: [", nw);
        for (i=0; i<nw; i++) {
            printf("%s", W[i]);
            if (i < nw-1) printf(", ");
        }
        printf("]nn");

        int *C = findwords(n, L, W, nw);

        for (i = 0; i < nw; i++) {
            printf("Word %s found %d timesn", W[i], C[i]);
        }
        return 0;
}
