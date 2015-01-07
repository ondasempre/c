/* somma progressiva. il prog. termina quando si inserisce un valore minore 
o pari allo zero   */


#include <stdio.h>
 
int main()
{
int i, p;

p = 0;
printf(" Inserisci il primo numero, grazie molto gentile:  ");
scanf("%d", &i);

while (i >= 0)  {
p += i;
printf("La somma progressiva attuale è: %d\n", p);
printf("Inserisci ancora una volta un valore a scelta: ");
scanf("%d", &i);

}
printf("La somma progressiva finale è: %d\n", p);

}