#include <stdio.h>

int main() {

	int a, b, t, ri=0;
	printf("Inserisci due numeri: \n");
	scanf("%d %d", &b, &a);
	
	if(a>b) ri=a-b-1;
	if(a<b) {
	t=b;
	ri=t-a-1;
}
	if(a==b) printf("Distanza zero\n");
	
	printf("Distanza = %d\n\n", ri);
	return 0;
	}
