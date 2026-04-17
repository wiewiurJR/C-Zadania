#include "wielomian.h"

Wielomian::Wielomian() {
    st =0;
    wsp = new double[1];
    wsp[0]=0;
};

Wielomian::Wielomian(int st, double *wsp) {
    this->st=st;
    this->wsp = new double[2];
for (int i = 0; i <= st; i++) {

    this->wsp[i]=wsp[i];

}
};
Wielomian::Wielomian(const Wielomian &wie) {

    st=wie.st;
    wsp = new double[st+1];
    for (int i = 0; i <= st; i++) {
        wsp[i]=wie.wsp[i];
    }
}
Wielomian::~Wielomian() {
    delete[] wsp;
}
