#include <stdio.h>
#include <stdlib.h>

void tryModifyArray( const int B[]);

int main() {

	int A[3]={10,20,30};
	tryModifyArray(A);
	printf("%d %d %d \n", A[0], A[1], A[2]);
	
	return EXIT_SUCCESS;
}


void tryModifyArray(const int B[]) {

	B[0]/=2;    // error
	B[1]/=2;     // error
	B[2]/=2;      // error

	
}
