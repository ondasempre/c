#include <stdio.h>
#include <stdlib.h>
#include <assert.h>  // controllo di verità

char* elimina(char *s); // prototipo

int main() {
	char s[]="aaabbccd";
	char *risultato= elimina(s);
	printf("Risultato: %s\n", risultato);
	return 0;
}

char* elimina(char *s) {
	
	char *t = NULL;
	char a=*s; // variabile char
	int i, cnt=1, j=1;
	for(i=1; *(s+i)!='\0';i++ ) {
		if(*(s+i)!=a) {
			a=*(s+i);
			cnt++;
			
		}
	
	}
	
	t=(char *) malloc(sizeof(char )*(cnt+1)); // cast (+1 perché conto anche il carattere nullo !!)
	assert(t); // controllo di verità (asserisco che t sia allocato)
		
	a=*s;
	*t=*s;
	for(i=1; *(s+i)!='\0';i++ ) {
		if(*(s+i)!=a) {
			
			a=*(s+i);
			*(t+j)=*(s+i);
			j++;
		}
	} 
	*(t+j)='\0';
	
	return t;
}

	


	
