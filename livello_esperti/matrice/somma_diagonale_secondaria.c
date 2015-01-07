#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int matrix[3][3]={ {1,2,3},
                       {2,3,4},
                       {4,5,6} };
    int i, j;
    int somma_diagonale_principale = 0;
    int somma_diagonale_secondaria = 0;
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i == j) {
                somma_diagonale_principale += matrix[i][j];
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i+j==2){
                somma_diagonale_secondaria += matrix[i][j];
            }
        }
    }
    printf("Somma della diagonale principale = %d.\n", somma_diagonale_principale);
    printf("Somma della diagonale secondaria = %d.\n", somma_diagonale_secondaria);
    return EXIT_SUCCESS;
}