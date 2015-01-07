/** 
 
Scrivere una funzione int longest_run(char *s, char c) che ritorna 
la posizione della più lunga sottostringa della stringa s composta 
solamente dal carattere c. Se il carattere c non appare in s, 
ritorna -1. 
Ad esempio, se s = "not running" e c = 'n' ritorna 6, 
se s = "10*(100+1000) = 11000" e c = '0' ritorna 9.
 
 
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longest_run(char *s, char c);

int main(void) {
    char *s ="not running";
    int ris = longest_run(s, 'n');
    printf(" %d\n", ris);
    
    return 0;
    
}

int longest_run(char *s, char c) {
    int i, p, start=-1, max=0, count=0;
    if(!s) return 0;
    for(i=0; s[i]!='\0'; i++) {
        if(s[i]==c) {
            if(count == 0)
                p = i;
            count++;
            if(count > max) {
                start = p;
                max = count;
            }
        } else 
            count = 0;
    }
    return start;
}


