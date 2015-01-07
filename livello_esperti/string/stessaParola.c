#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int stringPerm(char *str1, char *str2);

int main(void) {

	char str1[]="flavio";
	char str2[]="oivalf";
	if(stringPerm(str1, str2))
	printf("Le stringhe hanno le stesse lettere\n");
	
	return EXIT_SUCCESS;
}


int stringPerm(char *str1, char *str2) {
	int i, j, count =0;
	for(i=0; str1[i]!='\0'; i++) {
		for(j=0; str2[j]; j++) {
			if(str1[i]==str2[j])
				count++;
		}
	}
	if(count==strlen(str1)) return 1;
	else return 0; 
}
