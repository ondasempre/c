#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Carta { 
	int valore; 
	char seme; 
};


typedef struct Carta Carta;
typedef Carta Mazzo[52]; // ho definito il mazzo di 52 carte

void inimazzo(Mazzo M);
void stampamazzo(Mazzo M);


int main(void) {

	srand( time(NULL)); 
	Mazzo M;
	//stampamazzo(M);
	inimazzo(M);
	stampamazzo(M);
	return 0;
	
}


void inimazzo(Mazzo M) {

	int elenco[52];
	int i,card = random()%52;
	
	for(i=0; i<52; i++) 
		elenco[i] = i;
	for(i=0; i<52; i++) {
		while (elenco[card] == -1) {
			card = random()%52;
		}
		
		elenco[card] = -1;
		
		if(card>=0 && card<=12) M[i].seme = 'P';
		if(card>=13 && card<=25) M[i].seme = 'F';
		if(card>=26 && card<=38) M[i].seme = 'Q';
		if(card>=39 && card<=51) M[i].seme = 'C';
		
		while(card>12) 
			card -= 13; 
			
		M[i].valore = card+2;
		//card = -1;
	}
		
}


void stampamazzo(Mazzo M) {

	int i;
	for(i=0; i<52; i++) {
		printf("Carta n.%d: %d di %c.\n",i+1,M[i].valore,M[i].seme);
	}
}




