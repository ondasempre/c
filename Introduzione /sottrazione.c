#include <stdio.h>
#include <stdlib.h>

int main()
{
int sottrazione = 0;
int valore1 = 0, valore2 = 0;

	printf("Inserisci il primo valore: ");
scanf("%d", &valore1);

printf("Ora inserisci anche il secondo valore: ");
scanf("%d", &valore2);

sottrazione = valore1 - valore2;

printf("QUESTO E' IL VALORE CHE CERCAVI: %d", sottrazione);

}