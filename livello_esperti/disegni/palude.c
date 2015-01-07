/* File: palude.c */
/* Time-stamp: "2001-04-30 15:38:09 calvanes" */
/* Scopo: esercizio significativo sulla ricorsione */

/*
  Data una matrice di 0 e 1 che rappresenta una palude,
  cerca un attraversamento e lo stampa se esiste.

  Variante in cui sono possibili movimenti solo in avanti, cioe`
  da <riga,colonna> a
   - <riga-1, colonna+1>  (solo se la riga non e` la prima)
   - <riga,   colonna+1>
   - <riga+1, colonna+1>  (solo se la riga non e` l'ultima)
*/


#include <stdio.h>

#define M 5  /* numero di righe, cioe` larghezza della palude */
#define N 6  /* numero di colonne, cioe` lunghezza della palude,
                coincide con la lunghezza di un cammino attraverso la palude */


/* Cerca un cammino a partire dalla posizione <i,j> della palude.
   Restituisce vero (1) se il cammino e` stato trovato, falso (0) altrimenti.
*/
int CercaCammino (int palude[M][N],      /* la palude */
                  int i, int j,          /* posizione corrente */
                  int cammino[N]);       /* vettore dove mem. cammino tovato */


/* Cerca un cammino che porti dalla prima fino all'ultima colonna della palude.
   Restituisce vero (1) se il cammino e` stato trovato, falso (0) altrimenti.
 */
int EsploraPalude (int palude [M][N],    /* la palude */
                   int cammino[N]);      /* vettore dove mem. cammino tovato */


/* Stampa su video una palude evidenziando un cammino attraverso asterischi.*/
void StampaCammino (int palude [M][N], int cammino[N]);


int main(void)
{
  /* una palude senza cammini */

  int palude[M][N] = {{1,0,0,1,0,0},
                      {0,1,0,0,0,0},
                      {0,0,1,1,0,0},
                      {1,1,0,0,1,0},
                      {1,1,1,0,1,1}};

  int cammino[N];            /* vettore dove memorizzare il cammino trovato  */

                                                      /* ricerca del cammino */
  if (EsploraPalude(palude, cammino))
    StampaCammino(palude, cammino);
  else
    printf("Non ci sono cammini che attraversano la palude\n");

  return 0;
}


int CercaCammino (int palude[M][N],  /* la palude */
                  int i, int j,      /* posizione corrente */
                  int cammino[N])    /* vettore dove mem. cammino tovato */
  /* Cerca un cammino a partire dalla posizione <i,j> della palude.
     Restituisce vero (1) se il cammino e` stato trovato, falso (0) altrimenti.
  */
{
  int trovato = 0;   /* variabile booleana che memorizza se il cammino e` stato
                        trovato */

  if (palude[i][j] == 1) {                          /* sono sulla terraferma */
    cammino[j] = i;   /* aggiorno la pos. corrente nel cammino da restituire */
    if (j == N-1)     /* sono arrivato dall'altra parte della palude */
      trovato = 1;
    else {                           /* cerco un passaggio nella colonna j+1 */

      if (i > 0)                             /* non sono sulla prima riga;
                                                provo la posizione <i-1,j+1> */
        trovato = CercaCammino(palude, i-1, j+1, cammino);

      if (!trovato)                          /* provo la posizione <i,j+1> */
        trovato = CercaCammino(palude, i, j+1, cammino);

      if (!trovato && i < M-1)               /* non sono sull'ultima riga;
                                                provo la posizione <i+1,j+1> */
        trovato = CercaCammino(palude, i+1, j+1, cammino);
    }
  }

  return trovato;
}


int EsploraPalude (int palude [M][N],    /* la palude */
                   int cammino[N])       /* vettore dove mem. cammino tovato */
  /* Cerca un cammino che porti dalla prima fino all'ultima colonna della
     palude.
     Restituisce vero (1) se il cammino e` stato trovato, falso (0) altrimenti.
  */
{
  int i;
  int trovato = 0;  /* variabile booleana che memorizza se il cammino e` stato
                   trovato */

  /* prova a passare per gli elementi della prima colonna, fino a quando non e`
     stato trovato un cammino */
  for (i = 0; i < M && !trovato; i++)
    trovato = CercaCammino(palude, i, 0, cammino);

  return trovato;
}


void StampaCammino (int palude [M][N], int cammino[N])
  /* Stampa su video una palude evidenziando un cammino attraverso asterischi.
   */
{
  int i, j;

  for (i=0; i < N; i++)
    printf("%d ", cammino[i]);
  printf("\n\n");

  printf("Cammino che attraversa la palude:\n");
  for (i = 0; i < M; i++) {
    for (j = 0; j < N; j++) {
      printf("%d", palude[i][j]);        /* stampa l'elemento della matrice  */
      if (i == cammino[j])               /* se il punto fa parte del cammino */
        printf("*");                     /*   stampa '*'                     */
      else                               /* altrimenti                       */
        printf(" ");                     /*   stampa uno spazio              */
    }
    printf("\n");
  }
}
