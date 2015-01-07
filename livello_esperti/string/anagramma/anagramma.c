#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int anagramma(char *s1, char *s2);
void strw(char *text, char *word);

int main(void) {
        strw("il ratto ha mangiato la torta","trota");
	return EXIT_SUCCESS;
}

int anagramma(char *s1, char *s2) {
	assert(s1 && s2); // diverse da NULL
	int i;
	int somma_uno=0, somma_due=0;
	for(i=0; i<strlen(s1); i++) {
		somma_uno +=*(s1+i);
	}
	for(i=0; i<strlen(s2); i++) {
		somma_due +=*(s2+i);
	}
	return (somma_uno==somma_due);

}

void strw(char *text, char *word) {

	assert(text && word);
		
	char *token = NULL;
	char *copy = NULL;
	
	//Inizio codice
	//Copia della stringa "text"
	copy = (char*)malloc(sizeof(char)*(strlen(text)+1));
	assert(copy);
	strcpy(copy,text);
	
	//Invoco la funzione "anagramma" su ogni singola parola.
	token = strtok(copy," ");
	if (anagramma(token,word)) {
		printf("%s\n",token);
	}
	
	while ((token = strtok(NULL," "))!=NULL) {
	 	if(anagramma(token,word)) {
	 		printf("%s\n",token);
	 	}
	}
	
	free(copy);
	copy = NULL;
}
