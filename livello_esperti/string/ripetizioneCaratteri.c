#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int nocc(char s[], int n, char c);
int repstr(char *s, int k);

int main(void) {
	
        char *s = "le mele non sono solo rosse";
        printf("%d\n", repstr(s,3));
	
	return EXIT_SUCCESS;
}

// Funzione ausiliaria per contare le occorrenze
int nocc(char s[], int n, char c) {
	int i, occ=0;
	for(i=0; i<n; i++) 
		if(s[i]==c) occ++;
	return occ;
}

int repstr(char *s, int k)  {

	int nchars=0;       // contatore caratteri
	int i, n=strlen(s); // funzione che ritorna la lunghezza della stringa
	for(i=0; i<n; i++) {
		if(nocc(s,n,s[i])!=0) {
			if(nocc(s, n, s[+i])>=k) 
				nchars++;
			}
	}
	return nchars;
}
