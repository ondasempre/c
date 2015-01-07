/*  Ritorna la sottostringa più lunga meno la cifra selezionata es. "stringa di esempio"
    viene richiamata dalla funzione nochar e restituisce 6 **/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int nochar(char *str, char x);

int main(void) {
	char str[]="stringa di esempio";
	char x='i';
	printf("%d\n", nochar(str, x));
	
	return EXIT_SUCCESS;
}


int nochar(char *str, char x) {
	int i,j, max, tmp=0, count=0;
	for(j=0; str[j]!='\0'; j++) {
		
		count=0;
		for(i=0; str[i]!=' '; i++) {
			if(str[i]!=' ' && str[i]!=x )
				count++;
		}
		if(count>tmp) max=count;
		
		
	}
	return max;
}

