#include <stdio.h>
#include <stdlib.h>

void doubleof(int *ilmioarray);

int main(void) {
    int array[5]={1,2,3,4,5};
    doubleof(array);
    int i;
    for(i=0; i<5; i++) {
        printf("%d.valore = %d ", i+1, array[i]);
        printf("\n");
    }
    
    return 0;
}


void doubleof(int *ilmioarray) {
    int i;
    
    
    for(i=0; i<5; i++) {
        ilmioarray[i]*=2;
    }
    p=&ilmioarray;
}