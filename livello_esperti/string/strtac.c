#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strtac(char *s1, char *s2);

int main(void)  {
	char s1[] = {"Terza"};
	char s2[] = {"Quarta"};
	strtac(s1,s2);
	return EXIT_SUCCESS;
}


void strtac(char *s1, char *s2) {
	int i, j;
	for(i=0; s2[i]!='\0'; i++) {
		printf("%c", s2[i]);
	}
	for(j=0; s1[j]!='\0'; j++) {
		printf("%c", s1[j]);
	}
	printf("\n");
}
