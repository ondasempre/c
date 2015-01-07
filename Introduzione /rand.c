/*
 *  untitled.c
 *  
 *
 *  Created by Flavio  on 17/11/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdlib.h>
#include <stdio.h>

main()
{

 int i;
 unsigned sid;
 printf ("Enter sid: ");
 scanf ("%u", &sid);
 srand (sid);
 
 for (i = 1; i <= 10; i++) {
 prinf ("%10d", 1 + (rand() % 6));
 
 if (i % 5 == 0)
 printf ("\n");
 
}

return 0;

}

