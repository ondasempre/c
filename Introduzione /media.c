/* Programma che ti calcola la media dei valori inseriti  */



#include <stdio.h>
int main()
{
	int a, i, t;
	float r;
	t = 0;
	i = 0;
	printf ("Inserisci un numero: ");
	scanf("%d",&a);
	while (a >= 0) {
		i++;
		t += a;
		r = t/i;
		printf ("La media attuale è: %.3f\n", r);
		printf ("Inserisci un numero: ");
		scanf("%d",&a);
	}
	printf ("La media finale è: %.3f\n", r);
}