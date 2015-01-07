/** Ordina le parole in ordine alfabetico ***/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    
    int i;
    int n=6;
    char *p[n];
    //char s[20];
    
    p[0]="Figo";
    p[1]="Maradona";
    p[2]="Baggio";
    p[3]="Zidane";
    p[4]="Rossi";
    p[5]="DelPiero";
    
    char *c;
    
    //BUBBLE SORT APPLICATO ALLE STRINGHE
    while(n>1){
        for(i=0; i<n-1; i++){
            
            if(strcmp(p[i],p[i+1])>0){
                c=p[i];
                p[i]=p[i+1];	
                p[i+1]=c;
            }
        }
        n--;
    }
    
    //STAMPA ELEMENTI ORDINATI
    for(i=0; i<6; i++){
        printf("%s ", p[i]);
        printf("\n");
    }
    printf("\n");
}