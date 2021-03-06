/**
 
 Si consideri il seguente tipo:
 
 typedef struct Elem {
 char *       str;     //stringa allocata dinamicamente
 struct Elem *next;
 } Elem, *List;
 
 Scrivere una funzione List copytail(List L, int k) che inserisce una copia 
 dell'ultimo elemento della lista L immediatamente prima del k-esimo elemento 
 della lista e ritorna la lista modificata. Gli elementi sono numerati a partire
 da 0, se k è maggiore o uguale al numero di elementi della lista, il nuovo 
 elemento è aggiunto in coda. Il nuovo elemento deve avere una copia della stringa 
 del campo str. Se la lista L è "zero" → "one" → "two" → "three" allora:
 
 copytail(L, 2) ritorna "zero" → "one" → "three" → "two" → "three"
 copytail(L, 0) ritorna "three" → "zero" → "one" → "two" → "three"
 copytail(L, 5) ritorna "zero" → "one" → "two" → "three" → "three"

 ***/
 
 
 
 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 typedef struct Elem {
 char *str;
 struct Elem *next;
 } Elem, *List;
 
 List copytail(List L, int k);
 
 int main(void) {
 Elem uno, due ,tre, quattro;
 
 uno.str = "uno";
 due.str = "due";
 tre.str = "tre";
 quattro.str = "quattro";
 
 uno.next = &due;
 due.next = &tre;
 tre.next = &quattro;
 quattro.next = NULL;
 
 List L = copytail(&uno,2);
 
 do {
 printf("%s\n",L->str);
 L = L->next;
 } while (L);	
 
 return 0;
 }
 
 List copytail(List L, int k) {
 if (!L) {
 return L;
 }
 Elem *copy = (Elem*)malloc(sizeof(Elem));
 Elem *last = L;
 while (last->next) {
 last = last->next;
 }
 copy->str = (char*)malloc(sizeof(char)*(strlen(last->str)+1));
 strcpy(copy->str,last->str);
 
 Elem **pre = &L;
 while(k>0 && *pre) {
 pre = &((*pre)->next);
 k--;
	}
	copy->next = *pre;
	*pre = copy;
	return L;
}

