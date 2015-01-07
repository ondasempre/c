#include <stdio.h>

main()
{
float fahr, celsius;
int lower, upper, step;
lower = 0;
upper = 300;
step = 20;
 
	printf("Questa è una tabella delle temperature!!!\n");
printf("gradi F            gradi C°");
	
fahr = lower;
while (fahr <= upper) {
celsius =   (5.0/9.0) * (fahr-32.0);
printf("%3.1f\t%8.1f\n", fahr, celsius);
fahr += step;

	
	
	
	
}

}