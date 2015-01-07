
#include <stdio.h>
#include <stdlib.h>

int i=0;
char c;
Element v[LIMIT];

while(1){
 c=getchar();
 v[i],sign=c;
 if(c=="t") {
    break;
 }
 scanf("%u", &(v[i].val));
 i++;
 }
 prefix_sum(v,0);
 
	/*OPPURE*/
	
int=0;
char c;
Element v[LIMIT];

while(1){
  c=getchar();
  if(c=='p' || c=='n') {             /*USIAMO UN'ISTRUZIONE IF*/
     v[i].sign=c;
	 scanf("%u", &(v[i].val));
	 i++;
	 }
	 if(c=='t'){
	    breac;
		}
	}	
	prefix_sum(v,0);
	