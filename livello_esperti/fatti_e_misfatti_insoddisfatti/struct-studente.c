/** Sperimento la struttura **/


/** Progettare un tipo di dato strutturato Studente le cui istanze rappresentino studenti con le seguenti informazioni: matricola (un intero), nome, cognome (puntatori a stringhe), numero di esami sostenuti (un intero).

Scrivere una funzione Studente *newStudente(int mat, char *n, char *c, int ne) che allochi dinamicamente memoria per una nuova istanza del tipo Studente e assegni ai diversi campi i valori passati come argomenti.

Scrivere inoltre una funzione void printStudente(Studente *s) che stampi in output le informazioni relative allo studente puntato da s.  **/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
	int matricola;
	char *nome;
	char *cognome;
	int esami;
} Studente;

Studente *nuovoStudente(int mat, char *n, char *c, int ne) {
	Studente *new = malloc(sizeof(Studente));
	new->matricola = mat;
	new->nome=n;
	new->cognome=c;
	new->esami =ne;
	return new;
}

void stampaStudente(Studente *s) {
	printf("[%d] %s %s (%d esamini)", s->matricola, s->nome, s->cognome, s->esami);
}

int main(void) {
	int mat, ne;
	char nome[20], cogn[20];
	scanf("%d %s %s %d", &mat, nome, cogn, &ne);
	Studente *s = nuovoStudente(mat, nome, cogn, ne);
	printf("Crea istanza del tipo Studente: \n");
	stampaStudente(s);
	printf("\n");
	return 0;
}
























