/** Inserito un valore float (double) seguito da altri 10 valori,
    stampa a video il valore più vicino al primo inserito.  **/



#include <stdio.h>

float num(float A[10], float x);

int main(void) {
	
	float x,y;
	int i;
	float A[10];
	printf("Inserisci un valore in virgola mobile: \n");
	scanf("%f", &x);
	printf("Ora inserisci 10 valori in virgola mobile: \n");
	for(i=0; i<10; i++) {
		scanf("%f", &A[i]);
	}
	printf("Il numero più vicino è: %.3f.", num(A, x));
	printf("\n");
	return 0;
}


float num(float A[10], float x) {
	int i;
	float tmp=0;
	for(i=0; i<10; i++) {
		if(A[i]>=x || A[i]<=x) tmp=A[i];
	}
	return tmp;
}
