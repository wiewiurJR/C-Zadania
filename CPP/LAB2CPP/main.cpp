
#include "beben.h"
#include <iostream>
int main() {

    int k,n;
std::cout<<"Wpisz k potem n "<<std::endl;
    std::cin>>k>>n;

    Beben taczka(k);
    taczka.Wypisz();
    taczka.wypelnij();
    taczka.Wypisz();
    taczka.mieszaj();
    taczka.Wypisz(k);


    return 0;
}