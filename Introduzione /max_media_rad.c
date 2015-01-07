/*  Si scriva un programma C che legga da tastiera 5 numeri e stampi a video il maggiore tra essi, la
 loro media e la radice quadrata della somma.
 Si noti che per effettuare la radice quadrata esiste la funzione double sqrt (double)definita
 nel file di header: <math.h>    */

#include <stdio.h>
#include <math.h>
 main()
{
	int i, a, max, somma;
	float r;
	max = 0;
	for (i=0; i<5; i++) {
		printf ("inserisci un numero per 5 volte: ");
		scanf("%d",&a);
		if (max < a) {
			max = a;
		}
		somma += a;
	}
	r = somma / 5;
	printf ("Il valore massimo inserito è: %d\n", max);
	printf ("La radice quadrata della somma è: %.3f\n",
			sqrt(somma));
	printf ("La media è: %.3f\n", r);
}