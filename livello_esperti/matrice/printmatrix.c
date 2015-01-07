#include<stdio.h>

/* Function prototype */
void printmatrix(const int nr, const int nc, float M[nr][nc]);

int main() {
    /* Matrix definition and initialization */
    float M[3][4] = {	{1.2, 0.34, 3, 1}, 
    			{0.02, 1.2, 45.7, 123},
                	{23.6, 128.35, 12.9, 2.78}};

    /* Function call with actual parameters: 3, 4, M */
    printmatrix(3, 4, M);
    return 0;
}

/* Function definition */

void printmatrix(const int nr, const int nc, float M[nr][nc]) {
    int i, j;
    for (i=0; i<nr; i++) {
        for (j=0; j<nc; j++) {
            printf("%7.2f", M[i][j]);
        }
        printf("\n");
    }
}
