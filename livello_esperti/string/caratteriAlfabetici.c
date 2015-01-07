/** Stampa le lettere a sinistra del vettore e tutti gli altri caratteri a destra.
    Il programma non è stato testato con , | \ $ % etc. 

 **/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

int main(void)  {

	char A[]={" hkoTkpjr 1"};
	char B[SIZE];
		
	int i, j=0, k, indice=0;
	for(i=0; A[i]!='\0'; i++) {
		if(isalpha(A[i]))  { 
			B[j]=A[i];
			j++;
		}
		indice=j;
		
	//	if(isdigit(A[i]) || A[i]==' ') {
	//			B[j]=A[i];
	//			j++;
	//	}
	}	
		j=0;
		for(i=0; A[i]!='\0'; i++) {
			if(isdigit(A[i]) || A[i]==' ') {
				B[indice+j]=A[i];
				j++;
			}
		}
			
	        // STAMPA NUOVO ARRAY
		for(k=0; B[k]!='\0' ; k++) {	
			printf("%c", B[k]);
		}
		printf("\n");
		return EXIT_SUCCESS;
	}

