#include "beben.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct beben *utworz(int n ) {
    struct beben *utworzony=malloc(sizeof(struct beben));
    utworzony->rozmiar=n;
    utworzony->kule=(int*)malloc(n*sizeof(int));
    utworzony->opis=(char*)malloc(100*sizeof(char));
    strcpy(utworzony->opis,"Beben stworzony");
    return utworzony;
}

struct beben *wypelnij(struct beben *b) {
    for (int i = 0; i < b->rozmiar; i++) {
        b->kule[i] = i+1;
           }
    strcpy(b->opis,"Beben gotowy do losowania ");
    return b;
}
struct beben *mieszaj(struct beben *u) {
    for (int i =0; i<u->rozmiar; i++) {
        int random=rand()%u->rozmiar;
        int temp=u->kule[i];
        u->kule[i]=u->kule[random];
        u->kule[random]=temp;

        return u;
    }
    strcpy(u->opis,"Zawartosc wymieszana ");
}
void wypisz(struct beben *w, int n) {

    for (int i =0;i<n;i++) {
        printf("%d ",w->kule[i],"\n");
            }
    printf("\n%s\n",w->opis);

}


void zwolnij(struct beben *b) {
    free(b->kule);
    free(b->opis);
    free(b);
}













