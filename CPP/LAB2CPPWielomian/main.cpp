//
// Created by XYZ on 28.03.2026.
//

#include "wielomian.h"
#include <iostream>
using namespace std;
Wielomian Dodaj(const Wielomian &a, const Wielomian &b) {

    const Wielomian* wyższy;
    const Wielomian* niższy;

    if (a.st>b.st) {
        wyższy = &a;
        niższy = &b;
    }
    else {
        niższy = &a;
        wyższy = &b;
    }
    Wielomian suma(wyższy->st);
    for (int i = 0; i <= wyższy->st; i++ ) {
        if (niższy->st <=i){
            suma.wsp[i]= wyższy->wsp[i]+niższy->wsp[i];
        }else {
            suma.wsp[i]=wyższy->wsp[i] ;
        }
    }
        return suma;





}
int main() {
    double *wsp;
    int st;
    cout<<"Podaj st"<<endl;
    cin>>st;
    wsp=new double[st];
    cout<<"Podaj wsp"<<endl;
    for (int i = 0; i <= st; i++)
    {
        cin>>wsp[i];
    }
    Wielomian A(st,wsp);

    A.Wypisz();

}
