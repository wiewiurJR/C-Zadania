//
// Created by XYZ on 13.12.2025.
//


#include <math.h>
#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    printf("Wprowadź a: ");
    scanf(" %lf",&a);
    printf("Wprowadź b: ");

    scanf(" %lf",&b);
    printf("Wprowadź c: ");

    scanf(" %lf",&c);
    double delta =b*b-4*a*c;

    if (delta>0) {
        double x1 = (-b+sqrt(delta))/(2*a);
        double x2=(-b-sqrt(delta))/(2*a);
        printf("x1 = %lf \n",x1);
        printf("x2 = %lf \n",x2);


        int y1 =(a*x1*x1+b*x1+c);
        int y2 =(a*x2*x2+b*x2+c);

        printf("y1 = %lf \n",y1);
        printf("y2 = %lf \n",y2);



    }else if (delta ==0) {
        double x = -b/(2*a);
        printf("x = %lf \n",x);
    }else {
        printf("Nie ma miejsc zerowych ");
    }



}
