/* programma in c che acquisisce da tastiera una parola e la stampa SE E SOLO SE tale 
parola è palindroma. Per determinare la lunghezza della parola si può utilizzare
la funzione strlen(s) contenuta nel file header <string.h>  */


#include <stdio.h>
#include <string.h>

 main()
{
char s[100];
int i, flag;

i = 0;
scanf ("%s", s);
flag = 1;
while ((i < (strlen(s)/2)) && (flag == 1))  {
if (s[i] != s[strlen(s)-i-1])    {
flag = 0;

   }
    i++;

}
	if (flag == 1)   {
		printf("La parola è palindroma.\n");
	} else {
		printf("La parola nn è palindroma.\n");
	}
	
	
}
