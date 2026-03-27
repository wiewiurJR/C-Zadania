
#include <stdio.h>
#include "beben.h"


int main () {
    struct beben* taczka = utworz(49);
    wypisz(taczka,6);
    //printf("%s \n",taczka->opis);

    taczka=wypelnij(taczka);
   wypisz(taczka,6);
  //  printf("%s \n",taczka->opis);
    taczka=mieszaj(taczka);
  //  printf("%s \n ",taczka->opis);
  wypisz(taczka,6);
    zwolnij(taczka);
    return 0;
}