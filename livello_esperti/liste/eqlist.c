/**

Si consideri il seguente tipo:

struct _elem {
    int          input;
    int          output;
    struct _elem *next;
};
typedef struct _elem Elem;
typedef Elem* List;

Scrivere una funzione List eqlist(int n, int (*f1)(int), int (*f2)(int)) che per ogni intero k = 1, 2,..., n controlla se le due funzioni su input k producono lo stesso output. La funzione deve creare e ritornare una lista che per ogni input k per cui le due funzioni f1 e f2 producono lo stesso risultato ha un elemento di tipo Elem il cui campo input contiene k e il campo output contiene l'output comune alle due funzioni.

Ad esempio, se f1(k)  la funzione che ritorna 3*k - 4 e f2(k)  la funzione che ritorna il k-esimo numero primo, allora la chiamata eqlist(12, f1, f2) deve ritornare la lista:

{3, 5} -> {5, 11} -> {7, 17} -> {9, 23}.


**/

#include <stdio.h>
#include <stdlib.h>


struct _elem {
    int input;
    int output;
    struct _elem *next;
};

typedef struct _elem Elem;
typedef Elem* List;            

List eqlist(int n, int (*f1)(int), int (*f2)(int));

typedef int(*funct)(int);

int tutti_i_numeri(int n);
int numeri_dispari(int n);

int main(void) {
    funct f1=tutti_i_numeri,f2=numeri_dispari;
    List lista = eqlist(4,f1,f2);
    return EXIT_SUCCESS;
}

int tutti_i_numeri(int n) {
	return n;
}

int numeri_dispari(int n) {
	if(n%2) {
		return n;
	} else {
		return n+1;
	}
}

List eqlist(int n, int (*f1)(int), int (*f2)(int)) {
	if(n<0 && f1==NULL && f2==NULL) { 
		return NULL;
	}
	int i;
	List lista=NULL,iter=NULL;
	for(i=1;i<=n;i++) {
		if (f1(i) == f2(i)) {
			if (lista) {
				iter->next = (List)malloc(sizeof(Elem));
				iter->next->input = i;
				iter->next->output = f1(i);
				iter->next->next=NULL;
				iter = iter->next;
			} else {
				lista = (List)malloc(sizeof(Elem));
				lista->input = i;
				lista->output = f1(i);
				lista->next = NULL;
				iter = lista;
			}
		}
	}
	return lista;
}

