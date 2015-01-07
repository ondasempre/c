#include <stdio.h>

main()
{
	
float celsius, fahr;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;

	
printf("QUESTA TABELLA INVECE CONVERTE C° IN F°:\n");
	
	
celsius = lower;
while ( fahr <= upper)  {
fahr = (celsius * 9/5) + 32;
printf("%3.1f\t%8.1f\n", celsius, fahr);
celsius += step;

}


}