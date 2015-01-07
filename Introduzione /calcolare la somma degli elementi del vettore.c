/*
 *  calcolare la somma degli elementi del vettore.c
 *  
 *
 *  Created by Flavio  on 30/11/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, somma;
    for(i=0; i<10; i++) {
        somma += array[i];
    }
    printf("%d\n", somma);
    
    return EXIT_SUCCESS;
}

