#include <stdio.h>

main()
{
char a, b;

printf("inserisci due parole: \n");
scanf("%s%s", &a, &b);

if( a == b )
printf("%s è uguale a %s\n", a, b);

else {
printf("Queste parole sono diverse, ne devi scivere due uguali!\n");

   }
return 0;

}