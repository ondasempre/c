
//Includes: se utilizzi le parentesi angolari il compilatore cerca le intestazioni all'interno di
//cartelle predefinite /es: /usr/include. Se utilizzi doppi apici, inizia a cercarle dalla locazione in cui il file viene compilato.
#include "bubbleSort.h"


void bubblesort(int array[], int n ) {
	
	int j, k, tmp;
	for(j=0; j<n-1; j++) 
		for(k=0;k<n; k++) {
			if(array[j]>array[k]) {
				tmp=array[k];
				array[k]=array[j];
				array[j]=tmp;
			}
		}
}
