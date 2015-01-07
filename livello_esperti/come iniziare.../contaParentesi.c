#include <stdio.h>

int main(void) {

	char str[] = "a{b}{{}}}{b{aab}}c";
	printf("%d\n", braces(str));
	return 0;	
}

int braces(char *str) {
	int i, first=0, count=0;
	for(i=0; str[i]!='\0'; i++) {
		if(str[i]=='{') first=1;
		else if(str[i]=='}') {
			if(first) count++;
			first=0;
		}
	}
	return count;
}
