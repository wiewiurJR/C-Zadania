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

int main()
{
    int a, b;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("Najwiekszy wspolny dzielnik to: %d", nwd(a, b));

    return 0;
}