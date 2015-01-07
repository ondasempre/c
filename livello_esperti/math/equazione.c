#include <stdio.h>
#include <math.h>

#define ABS(x) x<0?-x:x

void eqsolver(double a, double b, double c );

int main() {

	eqsolver(16, -24, 9);
	return 0;
}


void eqsolver(double a, double b, double c ) {

	double delta=sqrt(   (b*b)-(4*(a*c))  );
	if(delta<0) {
		printf("Non ci sono soluzioni\n");
		
	} else if(!delta) { 
		printf("Ci sono due soluzioni coincidenti: %lf\n",((double)(-b+delta)/(2*a))  );
	} else {
		printf("Due soluzioni distinte: %lf e %lf \n",((double)(-b-delta)/(2*a)),((double)(-b+delta)/(2*a)));
	}
	
 	
}

