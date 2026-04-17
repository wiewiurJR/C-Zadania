//
// Created by XYZ on 28.03.2026.
//
#include "beben.h"
#include <cstdlib>
#include <iostream>

Beben::Beben(int n ){
    opis = "Beben stworzony";
    rozmiar = n;
    kule = new int[n];
std::srand(time(NULL));
};
Beben::~Beben(){
    delete[] kule;
std::cout<<"Beben zostal usuniety"<<std::endl;
};

Beben& Beben::wypelnij() {
    for (int i = 0; i < rozmiar; i++) {
        kule[i] = i + 1;
    }
    return *this;
}
Beben& Beben::mieszaj() {
    opis="zawartosc wymieszana";
    for (int i = 0; i < rozmiar; i++) {
        int random = rand() % rozmiar;
        int temp = kule[i];
        kule[i] = kule[random];
        kule[random] = temp;
           }
    return *this;
}
void Beben::Wypisz(int k ) {
        std::cout<<opis<<std::endl;
        for (int i = 0; i < k; i++) {
            std::cout<<kule[i]<<" ";
        }
    std::cout<<std::endl;
};
void Beben::Wypisz() {
    return Wypisz(rozmiar);
}


Beben::Beben(const Beben &b) {


    opis = b.opis;
    rozmiar = b.rozmiar;
    kule= new int[rozmiar];
    for (int i = 0; i < rozmiar; i++) {
        kule[i] = b.kule[i];
    }
}

