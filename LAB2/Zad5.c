#include <stdio.h>
//
// Created by XYZ on 13.12.2025.
//
int main() {
double x;
double b;
double c;
printf("Wprowadź kwote początkową:");

    scanf("%lf",&x);
    printf("Przez ile lat będzie na lokacie:");
    scanf("%lf",&b);
    printf("Podaj oprocentowanie:");
    scanf("%lf",&c);
    c=c/100;
    while (b>0) {
    b-=1;
        int i=1;
        i++;
    c=c+c*c;
        x=x+(c*x);
        printf(" nr%d    %lf     %lf \n",i,x,c);
        i++;
    }
    printf("Kwota na koncu: %lf",x);
}