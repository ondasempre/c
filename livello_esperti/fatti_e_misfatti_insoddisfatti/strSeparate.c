/*** Scrivere una funzione char *factors(char *str, int k) che ritorna, in una stringa allocata dinamicamente, la concatenazione delle sottostringhe distinte di lunghezza k della stringa str separate dal carattere '_'. Ad esempio, se str = "aaabaaab" e k = 3, allora la funzione ritorna la stringa "aaa_aab_aba_baa".   ***/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *factors(char *str, int k);

int main(void) {
	int k=3;   		// lunghezza sottostringa
	str[] = "aaabaaab";	// stringa principale
	printf("%s\n", factors(str, k));

	return EXIT_SUCCESS;
}

char *factors(char *str, int k) { // funzione che ritorna la stringa modificata
	char *fattori;
	int i;
	fattori = (char)malloc(sizeof(char*)*k);
	

}
