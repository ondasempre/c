/***

Scrivere un programma che legge una linea di caratteri (di lunghezza al più 100, contente al più 10 parole e terminata da '\n') e ne stampa le parole in essa contenute in verticale, ignorando tutti gli altri caratteri.

***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
	
	char **matrix;
	char str="Questa casa non è un albergo";
	int i, j, cc=0;
	for(i<0; str[i]!='\0'; i++) {		   // lunghezza stringa
		cc++;
	}
	matrix = (char)malloc(sizeof(char*)str+1); // alloco memoria per matrix
	for(j=0; j<cc; j++)
