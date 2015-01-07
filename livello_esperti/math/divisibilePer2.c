/** Scrivere una funzione ricorsiva int isDivisibleBy3(long n) 
    che restituisce 1 se n è divisible per 3, 0 altrimenti. 
    
    Si applichi la seguente caratterizzazione induttiva dei numeri divisibili per 3: 
    1) I numeri 0, 3, 6, 9 sono divisibili per 3; 
    2) Un intero è divisibile per 3 se e solo se la somma delle sue cifre è divisibile per 3. 
    3) Si osservi infine che un numero negativo è divisibile per 3 se e solo se il suo opposto è divisibile per 3. 
    
    
    **/

#include <stdio.h>
int isDivisibleBy3(long n);

int main(void) {
	
	long n=-3;
	if( isDivisibleBy3(n) ) printf("Il numero è divisibile\n");
	else printf("No, non è divisibile.\n");
	
	return 0;
}

int isDivisibleBy3(long n) {
	
	if( (n%3)>0 ) return 0;
	else return 1;
}
