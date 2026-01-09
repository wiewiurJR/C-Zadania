//
// Created by bartosz on 1/9/2026.
#include <stdio.h>
//
// Created by bartosz on 1/9/2026.
//#include <stdio.h>
int main()
{
    int n, i = 0;
    float tablica[1000];
    float suma = 0.0;
    printf("Ile liczb: ");
    scanf("%d", &n);
    printf("Podaj kolejne liczby:\n");
    while(i<n)
    {
        scanf("%f", &tablica[i]);
        i++;
    }
    for(i=0; i<n; i++)
        suma = suma + tablica[i];
    printf("Suma = %f\n", suma);
    printf("Srednia = %f\n", suma/n);
    return 0;
}