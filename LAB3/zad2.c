//
// Created by bartosz on 1/9/2026.
#include <stdio.h>
//
// Created by bartosz on 1/9/2026.
//#include <stdio.h>
int main()
{
    int n, i = 0;
    float tablica[6];
    float suma = 0.0;
    printf("Ile liczb: ");
    scanf("%d", &n);
    size_t x = sizeof(tablica)/sizeof(tablica[0]);
    if (n >x && n!=0) {
        printf("Nie ma miejsc na liczby");
        return 1;

    }
    printf("Podaj kolejne liczby:\n");
    while(i<n)
    {
        scanf("%f", &tablica[i]);
        i++;
    }
    for (i=n; i>=0; i--) {

        printf("%f\n", tablica[i]);
    }
    return 0;
}