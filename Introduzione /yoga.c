/*
 *  yoga.c
 *  
 *
 *  Created by flavioibanez on 13/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "yoga.h"
#include <stdio.h>

int main()
{
 int n;
 scanf("d", &n);
 
 if(n==0) || (n==1)
   printf("errore\n");

 else {
  
        for(int i=1; i<n; i++)
		printf("%d*", i);
	printf("%d", n);
	
		} 	 
 