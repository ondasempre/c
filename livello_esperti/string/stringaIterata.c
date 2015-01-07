#include <stdio.h>

void stampaCaratteri(const char *sPtr);

int main(void ) {
	char string[]="Stampa caratteri di una stringa";
	printf("La stringa in questione è: \n");
	stampaCaratteri(string);
	return 0;
}


void stampaCaratteri(const char *sPtr ) {
	for(; *sPtr!='\0'; sPtr++) {
		printf("%c", *sPtr);
	}
	printf("\n\n");
}
