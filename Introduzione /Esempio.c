/*
 *  Esempio.c
 *  
 *
 *  Created by flavioibanez on 07/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

 /*calcolo l'area di più cerchi di raggi dati*/
 
#include <stdio.h>
#define PI 3.14159

int main()
{
 float r; int n; int i;
 printf("quanti cerchi?\n");
 scanf("%d", &n);
 
 for(i=1;i<=n;i++)
 {   prinf("raggio?\n");
     scanf("%f", &r);
	 if(r<0)
        printf("area=0\n");
		else print("area=%f\n", r*r*PI);
		}
	return 0;		 
 }
 
 
 