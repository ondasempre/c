#include <stdio.h>
#include <stdlib.h>
#define NUM_COLONNE 4
#define NUM_RIGHE 4

int somma_max_riga(int M[][NUM_COLONNE]);
int somma_min_colonne(int M[][NUM_COLONNE]);
int zeri_matrice1(int M[][NUM_COLONNE]);
int zeri_matrice2(int M[][NUM_COLONNE]);
void stampa_matrice_serpentina(int M[][NUM_COLONNE]);
int somma_valori_cornice(int M[][NUM_COLONNE],int k);
int massimo_riga_colonna (int M[][NUM_COLONNE],int i,int j);
int massimo_diagonale (int M[][NUM_COLONNE],int i,int j);

int main(void) {
    
    int sum;
    int matrix[NUM_RIGHE][NUM_COLONNE]={ {1,2,3,2},
                                         {2,0,4,3},
                                         {0,0,0,6},
                                         {2,3,4,5}  };
    
    printf("Somma max righe: %d \n", sum = somma_max_riga(matrix));
    printf("Somma min colonne: %d \n", sum = somma_min_colonne(matrix));
    printf("Zeri matrice1: %d\n", sum = zeri_matrice1(matrix));
    printf("Zeri matrice2: %d\n", sum = zeri_matrice2(matrix)); 
    
    stampa_matrice_serpentina(matrix); // Stampa a serpentina
    
    printf("Somma valori cornice: %d\n", sum = somma_valori_cornice(matrix,1));
    printf("Max riga clonna: %d\n", sum = massimo_riga_colonna(matrix, 2, 5));
    printf("Max diagonale: %d\n", sum = massimo_diagonale(matrix, 1, 5));
    
    
    
    
    
    return EXIT_SUCCESS;
    
}



/* calcola la somma degli elementi piu' grandi di ogni riga */
int somma_max_riga(int M[][NUM_COLONNE]) {
	int i,j;
	int max;
	int totale=0;
	for (i=0; i<NUM_RIGHE; i++) {
		max=M[i][0];
   		for (j=1; j<NUM_COLONNE; j++) {
			if (M[i][j]> max)
                max=M[i][j];
		}
        totale+=max;
	}
	return totale;
}

/* calcola la somma degli elementi piu' piccoli di ogni colonna */
int somma_min_colonne(int M[][NUM_COLONNE]) {
	int i,j;
	int min;
	int totale=0;
	for (j=0; j<NUM_COLONNE; j++) {
		min=M[0][j];
   		for (i=1; i<NUM_RIGHE; i++) {
			if (M[i][j]< min)
                min=M[i][j];
		}
        totale+=min;
	}
	return totale;
}

/*calcola la sequenza piu' lunga di zeri consecutivi della matrice
 scorrendola per righe da sinistra a destra, dall'alto in basso*/
int zeri_matrice1(int M[][NUM_COLONNE]) {
	int i,j;
	int zeri=0;
	int temp=0;
	int flag=0;
	for (i=0; i<NUM_RIGHE; i++) {
   		for (j=0; j<NUM_COLONNE; j++) {
			if ((M[i][j]==0) && (!flag)) {
				temp++;
				flag=1;
			}
			else if ((M[i][j]==0) && (flag==1)) {
				temp++;
			}
            /* le due righe sopra possono essere compattate*/
			else if ((M[i][j]!=0) && (flag==1)) {
				if (temp>zeri)
					zeri=temp;
				temp=0;
				flag=0;		
			}
		}
	}
	return ((temp>zeri)?temp:zeri);
}


/*calcola la sequenza piu' lunga di zeri consecutivi della matrice
 scorrendola per righe da destra a sinistra, dal basso in alto*/
int zeri_matrice2(int M[][NUM_COLONNE]) {
	int i,j;
	int zeri=0;
	int temp=0;
	int flag=0;
	for (i=NUM_RIGHE-1; i>=0; i--) {
   		for (j=NUM_COLONNE-1; j>=0; j--) {
			if ((M[i][j]==0) && (!flag))  {
				temp++;
				flag=1;
			}
			else if ((M[i][j]==0) && (flag==1)) {
				temp++;
			}
            /* le due righe sopra possono essere compattate*/
			else if ((M[i][j]!=0) && (flag==1))   {
				if (temp>zeri)
					zeri=temp;
				temp=0;
				flag=0;		
			}
		}
	}
	return ((temp>zeri)?temp:zeri);
}

/* stampa gli elementi della matrice a serpentina dal basso in  alto*/
void stampa_matrice_serpentina(int M[][NUM_COLONNE]) {
	int i,j;
	for (i=NUM_RIGHE-1; i>=0; i--) {
   		if ((NUM_RIGHE-1-i)%2==0)	{
			for (j=NUM_COLONNE-1; j>=0; j--)
				printf("%d",M[i][j]);
            
		}
		else {
			for (j=0; j<NUM_COLONNE; j++)
				printf("%d",M[i][j]);		
		}
		printf("\n");
	}	
}

/* dall'esterno all'interno dividiamo una matrice in cornici.
 La funzione che segue calcola il numero di elementi della kesima cornice*/
int somma_valori_cornice(int M[][NUM_COLONNE],int k) {
	int i,j;
	int somma=0;
	for (j=k; j<NUM_COLONNE-k;j++) {
		somma+=M[k][j];
        if (k!=NUM_RIGHE-1-k)
            somma+=M[NUM_RIGHE-1-k][j];		
	}
	for (i=k+1; i<NUM_RIGHE-1-k;i++) {
		somma+=M[i][k];
        if (k!=NUM_COLONNE -1 -k)
            somma+=M[i][NUM_COLONNE-1-k];		
	}
	return somma;
}


/* dato un elemento i e j la funzione verifica se tale elemento e'
 il piu' grande sulla sua riga e colonna*/
int massimo_riga_colonna (int M[][NUM_COLONNE],int i,int j) {
	int r,c;
	for (r=0; r<NUM_RIGHE; r++) {
		if (M[r][j]>M[i][j])
			return 0;
	}
	for (c=0; c<NUM_COLONNE; c++) {
		if (M[i][c]>M[i][j])
			return 0;
	}	
	return 1;
}

/* dato un elemento i e j la funzione verifica se tale elemento e'
 il piu' grande tra gli elementi delle diagonali che passano per lui*/
int massimo_diagonale (int M[][NUM_COLONNE],int i,int j) {
	int r,c;
	r=i+1;
	c=j+1;
	while ((r<NUM_RIGHE) && (c<NUM_COLONNE)) {
		if (M[r][c]>M[i][j]) {
			return 0;
		} else {
            r++;
            c++;
		}
	}
	r=i-1;
	c=j-1;
	while ((r>0) && (c>0)) {
		if (M[r][c]>M[i][j]) {
			return 0;
		} else {
            r--;
            c--;
		}
	}
	r=i+1;
	c=j-1;
	while ((r<NUM_RIGHE) && (c>0)) {
		if (M[r][c]>M[i][j]) {
			return 0;
		} else {
            r++;
            c--;
		}
	}
	r=i-1;
	c=j+1;
	while ((r>0) && (c<NUM_COLONNE)) {
		if (M[r][c]>M[i][j]) {
			return 0;
		} else {
            r--;
            c++;
		}
	}	
	return 1;
}