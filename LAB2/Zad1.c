//
// Created by bartosz on 12/12/2025.
//
#include <stdio.h>
/* program sprawdza czy podana liczba jest parzysta */
int main()
{
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

    printf("%d",);
    return 0;
}