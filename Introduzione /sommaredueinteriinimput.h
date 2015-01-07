/*
 *  sommaredueinteriinimput.c
 *  
 *
 *  Created by flavioibanez on 13/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */
 
 /*somma di due interi*/
 
#include <stdio.h>

int main()
{
  int a; int b; int s;
  scanf("%d", &a);
  scanf("%d", &b);
  s=a+b;
  prntf("%d+%d=%d", a, b, s);
  
  return 0;
  
}

/*calcolare l'area di un cerchio*/

#incude <stdio.h>
#define PI 3.14159

int main()
{
 float r; float area;
 printf("raggio?\n");
 scanf("%f", &r);
 area=r*r*PI;
 printf("area=%f", area);
 
return 0;

}


