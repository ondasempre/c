#include <stdlib.h>

void annulla(int **array);

int main(void) {
	int *array = (int*)calloc(10,sizeof(int));
	annulla(&array);
	return EXIT_SUCCESS;
}

void annulla(int **array) {
	free(*array);
	*array = NULL;
}
