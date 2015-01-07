/* legge una riga d'ingresso, la assegna a s, ne restituisce la 
lunghezza */

int getline(char s[], int lim)
{
int c, i;

i = 0;
while(--lim > 0 && ( c==getchar()) != -1 && c != '\n')
	s[i++] = c;
if(c == '\n')
	s[i++] = c;
s[i] = '\0';
return i;

}