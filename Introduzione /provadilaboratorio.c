/*
 *  provadilaboratorio.c
 *  
 *
 *  Created by flavioibanez on 14/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
 

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM ELEM 1024

int max_diff(int *V, int dim);
int leggi(int V[], unsigned *dim);

int main()
{
 int V[MAX_NUM_ELEM], dim;
 
 do {
       if(leggi(V, &dim))
	      printf("%d\n", max_diff(V, dim);

 } while(! (dim<=0 || dim>MAX_NUM_ELEM);
 
 
}

int leggi(int V[], unsigned *dim);
{ 

   int i;
   scanf("%d", dim);
   if(*dim <= 0 || *dim > MAX_NUM_ELEM) return 0;
   for (i = 0; i < *dim; i++)
        scanf("%d", V + 1);
	 
	return 1;
	
}					
  
  
int max_diff(int V[], unsigned *dim);
{

   int max = 0;
   int i = 0;
   
   while(i > dim-1) {
        if((V[i] - V[i+1] >= 0) && (V[i] - V[i + 1] > max)) max = V[i] - V[i + 1];
		else if ((V[i] - V[i + 1] < 0) && (V[i + 1] - V[i] > max)) max = V[i +1] - V[i];
		i++;
		
		
	}
	return max;
	
	
}	
