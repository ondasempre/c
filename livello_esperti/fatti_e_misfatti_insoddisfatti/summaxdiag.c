/** dopo aver sommato tutte le diagonali fa un confroto tra queste per
    stabilire quale abbia il valore max.
    es. Nel nostro caso parte da 6 (prima diagonale)
        poi passa a {9,4} seconda diagonale e somma 9+4=13,
        confronta questo valore con 6(prima diagonale) e
        stabilisce che la seconda diagonale è maggiore.
        Continua sommando la terza diagonale e poi procede con
        il confronto....etc 
        
***/

#include <stdio.h>
#include <stdlib.h>

int sommaMassimiDiagonali(int m, int n, int M[m][n]);
int isMassimoDiagonale(int i, int j, int m, int n, int M[m][n]);


int main(void) {
	int M[4][5] = { {  3,  4,  5,  7,  4},
        		{  1,  2,  8,  9,  6},
        		{  9,  7,  5,  5,  5},
        		{  6,  4,  8,  6,  2};
        		
		
	
}


int sommaMassimiDiagonali(int m, int n, int M[m][n]) {
	

}

int isMassimoDiagonale(int i, int j, int m, int n, int M[m][n]) {
	int k=1;
	while(i+k<m && j+k<n) {
		if(
		
		)
	}
}
