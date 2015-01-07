#include <stdio.h>

main()
{
int val1, val2, sum;

printf("Inserisci il primo valore\n");
scanf("%d", &val1);

printf("ora metti il secondo valore\n");
scanf("%d", &val2);

sum = val1 + val2;

printf("Questa è la somma: %d", sum);

return 0;

}