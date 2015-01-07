#include <stdio.h>

int main() {
	
	int i;
	char string1[20];
	printf("Scrivi una parola: \n");
	scanf("%s", string1);
	
	printf("La parola inserita è: %s\n", string1);
	for(i=0; string1[i]!='\0'; i++) printf("%c%2c\n", string1[i], string1[i]);
	return 0;
}
