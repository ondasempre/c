/** Gestione di due strutture: una Studente e una Professore,
    utilizzando una terza struttura di tipo generico.
 
 **/


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


typedef struct {
    int matricola;
    char *nome;
    char *cognome;
    int numEsami;
} Studente;

typedef struct {
    char *nome;
    char *cognome;
    int numCorsi;
} Professore;

// Lista generica per la manipolazione dei dati
typedef genericList {
    void *info;
    struct genericList *next;
};

// Rinomino la lista generica
typedef struct genericList List;    

// Gestione studente
Studente *newStudente(int mat, char *n, char *c, int ne);
void printStudente(void *s);
// Gestione professore
Professore *newProfessore(char *n, char *c, int nc);
void printProfessore(void *p);

void add(List **l, void *newElem);
List *newNode(void *info);
void printList(List *l, void (*printElem)(l->info));

List *cercaStudentiPerCognome(List *l, char *parteCognome);
List *cerca(List *l, void *valoreCercato, int (*soddisfaCriterio)(void *elem, void *valore));

int soddisfaCriterioStudenteCognome(void *elem, void *valore);
int soddisfaCriterioProfessoreCorsi(void *elem, void *valore);

int main(void) {
    
}





