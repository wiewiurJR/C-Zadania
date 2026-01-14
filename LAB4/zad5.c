//
// Created by bartosz on 1/12/2026.
//
#include <windows.h>
#include <stdbool.h>
#include <stdio.h>

int czy_pierwsza(int n ) {
    if (n<=1)return 0;
    for (int i =2; i<n; i++) {
        if (n%i==0)return 0;
        return 1;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    printf("Podaj Liczbę");
    scanf("%d",&n);
    int Tablica[n];

    for (int i=0; i<n; i++) {
        if (Tablica[i]==1) {
            printf("%d",i);
        }else {
            printf("Liczba nie jest pierwsza");
        }
    }


    return 0;
}





