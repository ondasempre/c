#include <stdio.h>

 main()
{
int a;
printf("Inserisci un numero: ");
scanf("%d", &a);
while ( a >= 128) {
a -= 128;

}
 printf("%c\n", a);

}