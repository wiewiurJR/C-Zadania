#include <stdio.h>
//
// Created by XYZ on 13.12.2025.
//
int main() {
double  x=0 ;
double suma ;
printf("Wprowadź liczby: ");
    do {
        scanf("%lf",&x);
        suma += x;

    }
    while (x!=0);
printf("Suma liczb wprowadzonych jest: %lf",suma);


}