/* TRIANGOLO DI FLOYD:

   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15...


**/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    int riga, colonna;
    int cifra;
    
    printf("Inserisci il numero: ");
    scanf("%d", &numero);
    if(numero<=0) {
        printf("Error\n");
    } else {
        riga=0;
        cifra=1;
        while(riga<numero) {
            colonna=0;
            while(colonna<=riga) {
                printf("%d ", cifra);
                colonna = colonna+1;
                cifra =cifra+1;
            }
            printf("\n");
            riga=riga+1;
        }
    }
    return 0;
}