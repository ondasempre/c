/*
  Un esempio di puntatore a puntatore.
*/

#include <stdio.h>


int main() {
  int a;
  int *p;
  int **pp;

  a=9;

  p=&a;

  pp=&p;

  printf("Indirizzo di pp=%p, valore=%p\n", &pp, pp);

  printf("Indirizzo di  p=%p, valore=%p\n", &p, p);

  printf("Indirizzo di  a=%p, valore=%d\n", &a, a);

  return 0;
}
