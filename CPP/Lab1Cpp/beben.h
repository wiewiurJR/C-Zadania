#include <string>

struct beben
{
    int rozmiar;
    int *kule;
    std::string opis;
};
 beben *utworz(int n);
 beben &wypelnij( beben &b);
 beben &mieszaj( beben &b);
void wypisz( beben &b, int n);
void zwolnij( beben &b);
