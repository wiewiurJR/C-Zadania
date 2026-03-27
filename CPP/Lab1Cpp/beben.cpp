#include "beben.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


beben *utworz(int n ) {
    beben *utworzony=new beben;
    utworzony->rozmiar=n;
    utworzony->kule= new int[n];//(int*)malloc(n*sizeof(int));
   utworzony->opis="Beben stworzony";
    //strcpy(utworzony->opis,"Beben stworzony");
    return utworzony;
}

beben &wypelnij( beben &b) {
    for (int i = 0; i < b.rozmiar; i++) {
        b.kule[i] = i+1;
    }
    b.opis="Beben gotowy do losowania ";
  //  strcpy(b->opis,"Beben gotowy do losowania ");
    return b;
}
beben &mieszaj( beben &u) {
    for (int i =0; i<u.rozmiar; i++) {
        int random=std::rand()%u.rozmiar;
        int temp=u.kule[i];
        u.kule[i]=u.kule[random];
        u.kule[random]=temp;

        return u;
    }
   // strcpy(u->opis,"Zawartosc wymieszana ");
    u.opis="Zawartosc wymieszana ";
}
void wypisz( beben &w, int n) {

    for (int i =0;i<n;i++) {
        std::cout<<w.kule[i]<<std::endl;
        // printf("%d ",w->kule[i],"\n");
    }
    std::cout<<" "<< w.opis<<std::endl;
//    printf("\n%s\n ",w->opis);

}


void zwolnij( beben &b) {
    delete [] b.kule;

    delete &b;
}













