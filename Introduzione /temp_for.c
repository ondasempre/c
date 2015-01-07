#include <stdio.h>

main()
{
int fahr;

	printf("QUESTO E' IL PROGRAMMA DELLE TEMPERATURE CON UN CICLO FOR...\n");
	
for(fahr=0; fahr <= 300; fahr += 20)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));

}