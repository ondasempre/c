/***  Scrivere una funzione char *replacex(char *str, char *rep) che ritorna una stringa allocata dinamicamente ottenuta sostituendo ogni occorrenza del carattere 'X' nella stringa str con la stringa rep. Il blocco di memoria allocato per la stringa ritornata non deve essere più grande del necessario. Ad esempio, se str = "XXena e Xla vuota" e rep ="la pi" allora la funzione ritorna la stringa "la pila piena e la pila vuota". ***/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *replacex(char *str, char *rep); // prototipo di funzione che ha come argomenti
				      // due puntatori a char	

int main(void) {			// funzione principale

	char str[] = "XXena e Xla vuota";		// stringa 1
	char rep[] = "la pi";			// stringa 2
	char *ritornata;				// stringa modificata
	ritornata=replacex(str,rep);		// richiamo della funzione replacex
	printf("%s", ritornata);		// stampa a video
	
	return EXIT_SUCCESS;			// EXIT
	
}

char *replacex(char *str, char *rep) {		// funzione che crea una stringa dinamica
	char *cambia=NULL;			// puntatore inizializzato a NULL
	int i, k, j=0, x_count=0;					
	for(i=0; i<strlen(str); i++) {
		if(str[i]=='X') x_count++;
	}
	cambia= (char *)malloc(sizeof(char) *
		(strlen(str) - x_count + (strlen(rep)*x_count) + 1));
	
	for(i=0; i<strlen(str); i++ ) {
		if(str[i]=='X') {
			for(k=0; k<strlen(rep); k++) {
				cambia[j++]=rep[k];
				
			}
		} else {
			cambia[j++]=str[i];
		}
	}
	cambia[j]='\0';
	return cambia;					// ritorna la stringa modificata
}
