#include <stdio.h>

main()
{
int year;

if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  printf("%d è un anno bisestile\n", year);

else
 printf("%d non è un anno bisestile!\n", year);

}