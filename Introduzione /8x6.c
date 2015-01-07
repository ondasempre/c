/*
 *  8x6.c
 *  
 *
 *  Created by flavioibanez on 13/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include <Carbon/Carbon.h>
#include <stdio.h>
#include <stdlib.h>
#define C1 6
#define C2 8

int main()

{
  somma=0; i=1;
  do
  {
   somma+=C2; 
   i++;
   }
   
   while(i<=C1)
   printf("6x8=%d", somma);
   
   return 0;
   
}

   
