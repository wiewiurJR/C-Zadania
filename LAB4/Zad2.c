#include <stdio.h>

int nwd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int nwd2(int a, int b) {
    printf("Wchodzimy do funkcji nwd2 z argumentami: %d i %d \n",a,b);
    if (a==b) return a;
    if (a>b) return nwd2(a-b,b);
    else return nwd2(a,b-a);
}

int main()
{
    int a, b;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Najwiekszy wspolny dzielnik to: %d", nwd2(a, b));

    return 0;
}