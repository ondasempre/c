#include <stdio.h>
#include <string.h>


int ricercaSequenzialeConSentinella(int array[], int x, int n);


int main() {

	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int x=9, n=10;
	ricercaSequenzialeConSentinella(array, x, n);
	
	
	return 0;
	
}



int ricercaSequenzialeConSentinella(int array[], int x, int n) {
 
     int i;
 
     array[n]=x;
     for (i=0; array[i]!=x; i++) ;
 
     if (i<n) {
	printf("Il valore si trova nella posizione: %d \n", i);     
        return i;
      } else {
	printf("%s", "Valore non trovato!!! \n ");      
        return -1; 
   } 
 }
