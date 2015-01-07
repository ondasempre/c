
#include <stdio.h>
#include <stdlib.h>

main()
{

 int i=0; 
 char c; 
 Element v[LIMIT]; 
 
 while(1){ 
  c=getchar(); 
  v[i].sign = c; 
  if(c=='t') { 
  break; 
} 
scanf("%u", &(v[i].val)); 
 i++; 
 } 
    prefix_sum(v,0);
	
	}