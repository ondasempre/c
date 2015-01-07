#include <stdio.h>
#include <stdlib.h>

void t(int x, int *z);

int main(void) {

	int z;
	
	t(5,&z);
	printf("%d\n",z);
	
	return EXIT_SUCCESS;

}

void t(int x, int *z) {

	int z1;
	if (x <= 1)
		*z=x;
	else {
		t(x-1,&z1);
		t(x-2,z);
		*z=z1+*z;
	}
}

