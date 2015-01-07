/*
 *  provadilaboratorio1.c
 *  
 *
 *  Created by flavioibanez on 14/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */


#include <stdio.h>
#include <stdlib.h>
#define MAX_NUME_ELEM 1024

int leggi(int V[], unsigned *dim);
int somma(int *V, int dim);

int main()
{

   int V[MAX_NUM_ELEM], dim;
   do {
        if(leggi (V, &dim))
		    printf("%d\n", somma(V, dim));
		} while(! (dim<=0 || dim>MAX_NUM_ELEM);
			
}

int leggi(int V[], unsigned *dim)
{

 int i;
 scanf ("%u", dim);
 if (*dim <= 0 || *dim > MAX_NUM_ELEM) return 0;
 for (i = 0; i < *dim; i++)
	scanf("%d", V + 1);
	return 1;
	
}

int somma (int *V, int dim)
{

 int sum_mul3 = ..., sum_no_mul3 =..., i =...;
 while (...) {
 
 ....
 
}

return ...;
}

























