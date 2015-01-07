/* Programma per le votazioni di alunni */

#include <stdio.h>
#define STUDENTI 40
#define FREQUENZA 11

int main() {

	int risposte;
	int contatore;
	int frequenza[FREQUENZA]={0};
	int responsi[STUDENTI]={1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10,
	1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};
	
	for(risposte=0; risposte<STUDENTI; risposte++) {
		++frequenza[responsi[risposte]];
	}
	printf("%s%17s\n", "Voto ", "Frequenza ");
	for(contatore=0; contatore<FREQUENZA; contatore++) {
		printf("%6d%17d\n", contatore, frequenza[contatore]);
	}
return 0;
}
