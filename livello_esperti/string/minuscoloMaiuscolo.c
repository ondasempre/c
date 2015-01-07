#include <stdio.h>
#include <ctype.h>

void convertiInMaiuscolo(char *sPtr); // prototipo

int main(void) {
	char string[]="queste sono le parole di nostro signore";
	printf("%s\n", string);
	convertiInMaiuscolo(string);
	printf("%s\n", string);
	return 0;
}
	
	
void convertiInMaiuscolo(char *sPtr) {
	while(*sPtr!='\0') {
		if(islower(*sPtr)) {
			*sPtr=toupper(*sPtr);
		}
		++sPtr;
	}
}
