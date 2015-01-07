#include <stdio.h>
#define LEN 10
double Esercizio3(int A[]) {
	double B[8] = {2.0, 1.0, 0.5, 0.2, 0.1, 0.05, 0.02, 0.01};
	int i = 0;
	double somma = 0.0;
	for (i = 0; i < 8; i++) {
		somma += (double)A[i] * B[i];
	}
	return somma;
}
