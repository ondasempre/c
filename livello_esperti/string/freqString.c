/** conta semplicemente le ripetizioni dei valori 
    es. s7=2
    	8b=3
    	
    	+ la posizione degli indici.

***/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mostfreqstr(char *sA[], int n);

int main(void) {
	int ris;
    char *sA[] = {"s7","s7","g","8b","g","8b","8b","g"}; 
	ris= mostfreqstr(sA, 8); 
	printf("%d\n", ris);
	return 0;
}



int mostfreqstr(char *sA[], int n) {  
	int i, max=1, imax=0;
	for(i=1; i<n; i++) {
		int j, count=1;
		for(j=i+1; j<n; j++) {
			if( (strcmp(sA[i],sA[j])) == 0) {
				count++;
            }
        }
		if(count>max) {
			max=count;
			imax=i;
		}
	}
	return imax;
}

