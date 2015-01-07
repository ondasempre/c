#include <stdio.h>

int main(int A[], int B[])  {
	int i = 0;
	int check = 1;
	while (check && i < 10) {
		// Quando A[i] != B[i] il prefisso comune termina
		
		if (A[i] != B[i])   {
			check = 0;
			
		}
		else {
			i++;
		}
	}
	return i;
	
}
 