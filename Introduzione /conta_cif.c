#include <stdio.h>

main()     /* conta cifre, caratteri e spazi del testo in ingresso */
 {

	
	int c, i, nwhite, nother, ndigit[10];

nwhite = nother = 0;
for(i= 0; i<10; i++)
	ndigit[i] = 0;

 while((c =getchar()) != EOF)  {
 switch (c)  {
 case '0': case '1': case '2': case '3':case'4':
	 case'5':case '6': case '7': case'8':case'9':
		 ndigit[c-'0']++;
		 break;
		 
		 
	 case'\n':
 case' ':
 case '\t':
 nwhite++;
 break;
 default:
 nother++;
 break;
  
 }

 }printf("cifre =");
 for(i=0; i<10;i++)
printf("%d", ndigit[i]);
printf(", spazi = %d, altri = %d\n", nwhite, nother);

 return 0;


 }