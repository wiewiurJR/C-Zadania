//
// Created by bartosz on 12/12/2025.
//
#include <stdio.h>
/* program sprawdza czy podana liczba jest parzysta */
int main() {
    int x;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &x);
    if( x % 2 == 0 )
    {
        printf("Liczba %d jest parzysta\n", x);
    }
    else if (x % 3 == 0)
    {
        printf("Liczba %d jest podzielna przez 3 \n", x);
    }else
    {
        printf("Liczba %d jest niepodzielna przez 2 i 3 \n", x);
    }


    if (x % 10 == 1){
        printf("Ostatnią liczba w  %d jest jeden \n", x);
}
    int SecondToLastNumb;

    if (x>100) {
        SecondToLastNumb = (x%100);
            printf("Dwie ostatnie liczby tej cyfry to  w %d jest %d \n", x, SecondToLastNumb);
            return 0;

    }
}