#include <string>

class Beben {
private:
    int rozmiar;
    int *kule;
    std::string opis;
public:
    Beben(int n);
    Beben(const Beben& b );
    ~Beben();

    Beben& wypelnij();
    Beben& mieszaj();
    void Wypisz(int k);
    void Wypisz();





};
