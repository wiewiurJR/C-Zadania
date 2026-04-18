#include "wielomian.h"
#include <iostream>

using namespace std;

Wielomian::Wielomian(int st, double* wsp) : Wielomian(st)
{

	for (int i = 0; i < st+1; i++)
	{
		this->wsp[i] = wsp[i];
	}
}
Wielomian::Wielomian(int st) {
	this->st = st;
	wsp = new double[st + 1];
}
Wielomian::Wielomian() : Wielomian(0)
{

	wsp[0] = 0.0;
}

Wielomian::Wielomian(const Wielomian& w) : Wielomian(w.st)
{
	this->st = w.st;
	this->wsp = new double[w.st + 1];
	for (int i = 0; i < w.st + 1; i++)
	{
		this->wsp[i] = w.wsp[i];
	}
}

Wielomian Wielomian::Pochodna(int ktora)
{
	if (ktora > st)
	{
		Wielomian w;
		return w;
	}

	if (ktora == 1)
	{
		Wielomian w(st - 1);

		for (int i = 0; i < st; i++)
		{
			w.wsp[i] = this->wsp[i + 1] * (i + 1);
		}
		return w;
	}
	return Pochodna(1).Pochodna(ktora - 1);

}

void Wielomian::Wypisz()
{
	// do zaimplementowania
	cout << "f(x) =  ";
	for (int i=st;i>=0;i--) {
		if (wsp[i] != 0 ){
			cout << wsp[i] ;
			if (i != 0) {
				cout << "x^" << i << " + ";
			}
		}
	}
}

Wielomian::~Wielomian()
{
	delete[] wsp;
}

