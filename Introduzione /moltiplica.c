#include <stdio.h>
#include <stdlib.h>

int main()
{
int moltiplica;
int val1 = 0, val2 = 0;

printf("Immetti il primo valore: ");
scanf("%d", &val1);

printf("Immetti il secondo valore per cortesia: ");
scanf("%d", &val2);

moltiplica = val1*val2;

printf("Questo è il risultato della moltiplicazione: %d", moltiplica);

}