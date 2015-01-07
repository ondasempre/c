/*
 Stampa i caratteri di una stringa ed i corrispondenti codici ASCII
 */

#include <stdio.h>
#include <stdlib.h>

#define LUNGHEZZA_MAX 50

int main () {
	
	int i;
	char stringa1[] = "Conta questo se ci riesci!";
	char stringa2[LUNGHEZZA_MAX] = "HAHAHAAHA l'ha contata veramente!";
	char stringa3[] = "Se non ci credi riprova ! ! ! ";
	
	for (i=0 ; i<LUNGHEZZA_MAX ; i++)
		printf("%c (ASCII %d)\n",stringa1[i],stringa1[i]);
	
	printf("===========\n");
	
	for (i=0 ; i<LUNGHEZZA_MAX ; i++)
		printf("%c (ASCII %d)\n",stringa2[i],stringa2[i]);
	
	printf("===========\n");
	
	for (i=0 ; i<LUNGHEZZA_MAX ; i++)
		printf("%c (ASCII %d)\n",stringa3[i],stringa3[i]);
	
	return EXIT_SUCCESS;
}