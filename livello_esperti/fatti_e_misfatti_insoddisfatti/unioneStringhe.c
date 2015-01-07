/** Considerando il puntatore a char *strA[], elimina la parola
    presente in s[] e ritorna la stringa iniziale (senza spazi).  
    
    Nel nostro caso: "PrimaSecondaQuarta" 
**/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *arrayToStr(char *strA[], int n, char *s);

int main(void) {
	char *strA[] = {"Prima", "Seconda", "Terza", "Quarta"};
	char s[]={"Terza"};
	
	
}


int indice(char *strA[], char *s) {
	int i,j;
	for(i=0; strA[i]!='\0'; i++) {
		for(j=0; j<strlen(s); j++)      {
			 if(strA[i]==s[j]) tmp=stra[i];
			 
		}
	}
 }

	
char *arrayToStr(char *strA[], int n, char *s) {
	int i, prim=strlen(strA);
	int sec=strlen(s);
	char *array=NULL;
	array=(char *)malloc(sizeof(char)*(prim-sec));	// alloco memoria per la nuova stringa di caratteri
	for(i=0; strA[i]!='\0'; i++) {
		
			
	}
	
}


