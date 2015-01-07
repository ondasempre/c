#include <stdio.h>
#define MAXLINE 1000 

int getchar(char line[], int maxline);
void copy(char to[], char from[]);

main()
{
int len;  /* lunghezza della riga corrente */
int max;  /* lunghezza max riscontrata fino ad ora */
char line[MAXLINE];
char longest[MAXLINE];

max = 0;
while ((len = getline(line, MAXLINE)) > 0)
	if(len > max)   {
	max = len;

	copy(longest, line);
	}
if(max > 0)   /* c'era almeno una linea in ingresso */
	printf("%s", longest);

	return 0;

}

int getline(char s[], int lim)
{
int c, i;
for(i = 0; i < lim-1 && ( c = getchar()) != EOF && c != '\n'; ++i)
	s[i] c;
if ( c =='\n')  {
s[i] = c;
++i;

}

	s[i] = '\0';
	return i;
	
} 
void copy( char to[], char from[]) {
	int i;
	i = 0;
	while((to[i] = from[i] != '\0')
		  ++i;
		  
		  
		  }





