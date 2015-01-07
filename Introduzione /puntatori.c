/*
scrivo un programma che riordina le parole in ordine alfabetico
*/

#include <studio.h>
#include <stdlib.h>
#define MAXLEN 1000 /*lunghezza massima di una linea*/


char *lineptr[MAXLINES]; /*puntatore alle linee di testo*/

int readlines(char*lineptr[], int nlines);
void writelines(char*lineptr[], int nlines);
void qsort(char*lineptr[], int left, int right);

main()
{
 
  int nlines; /*numero di linee*/
  
  if((nlines=readlines(lineptr, MAXLINES))>=0
  {
   qsort(lineptr, 0, nlines -1);
   writlines(lineptr, nlines);
   return 0;
   }
   
   else {
   
         printf("errore. troppe linee da ordinare\n");
		 return 1;
		 
		 }
		 
}		 

int getline(char*, int
char*alloc(int);


/*readlines: legge le linee di imput*/

int readlines (char*lineptr[], int MAXLINES) 
{

   int len, nlines;
   char*p.line[MAXLEN]; 
   
nlines=0;
while ((len=getline(line, MAXLEN)) > 0)
      if(lines>= MAXLAN ||(p=alloc(len)) == NULL)   /*alloc restituisce il valore del ptatore*/
	  return -1;
	  
		 else
		 {
		 
           line[len-1] ='\0';  /*elimina il new line*/
		   strcpy(p, line);
		   lineptr[nlines++] = p;

           return 1;  
		   
		   
		   /*writelines: scrive in output le linee*/
		   
void writelines(char*lineptr[], int nlines)
{

 int i;
 
		   for(i=0; i<nlines; i++)
		      printf("%s\n", lineptr[i]);
			  
		}			   		   
























