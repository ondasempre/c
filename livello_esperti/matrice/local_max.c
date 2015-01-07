#include <stdio.h>
#include <stdlib.h>

double *localmaxval(int n, double M[n][n], int *cnt);

int main(void) {
    return 0;
}

double *localmaxval(int n, double M[n][n], int *cnt) {
    double *maxval = NULL;
    int i, j, count = 0;
    for(i=0; i<n; i++) {
        for(j=0;j<n; j++) {
            double v = M[i][j];
            int k = 0;
            while(k<n && M[i][k]<= v && M[k][j]<= v) 
                k++;
            if(k==n) {
                maxval = realloc(maxval, sizeof(double)*(count+1));
                maxval[count++] = v;
            }
        }
    }
    *cnt = count;
    return maxval;
}