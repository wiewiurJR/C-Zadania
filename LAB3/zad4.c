#include <stdio.h>
#include <windows.h>

//
// Created by XYZ on 10.01.2026.
//


int main() {
    SetConsoleOutputCP(CP_UTF8);
   int Tablica[1000];
   int n,i;
   printf("Wprowadź ile liczb będziesz wpisywał:");
   scanf("%d",&n);
   if (n<1000) {
       printf("Wypisz te liczby ");
       for (i = 0; i < n; i++) {
           scanf("%d",&Tablica[i]);
   }}else return printf("Przekroczyłeś maksymalny rozmiar tabeli");
    for (i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (Tablica[i]>Tablica[j]) {
                int temp = Tablica[i];
                Tablica[i] = Tablica[j];
                Tablica[j] = temp;
            }
        }
    }
    printf("\n Tablica po sortowaniu bąbelkowym: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tablica[i]);
    }





}