#include <stdio.h>

main()
{
int num1, num2;

printf("Inserisci due valori\n");
printf("poi ti dirò la relazione tra i due interi\n");
scanf("%d%d", &num1, &num2);

if(num1== num2)
printf("%d è uguale a %d\n", num1, num2);

if(num1 != num2)
	printf("il valore %d è diverso da %d!!!!\n", num1, num2);

if(num1 < num2)
printf("%d è minore di %d\n", num1, num2);

if(num1 > num2)
printf("%d è maggiore di %d\n", num1, num2);

return 0;

}
