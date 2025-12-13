#include <stdio.h>
//
// Created by XYZ on 13.12.2025.
//
int main() {
double x;
int b;
double c;
    printf("Wprowadź kwote początkową:");
    scanf("%lf",&x);

    printf("Przez ile lat będzie na lokacie:");
    scanf("%d",&b);

    printf("Podaj oprocentowanie:");
    scanf("%lf",&c);

printf("Kapitał początkowy: %lf \n",x);
printf("Oprocentowanie roczne: %lf \n",c);
printf("ile lat:%d \n",b);

int i=0;
    double g=x;

    double percent;
while (b!=0){
    b--;
i++;
    g = g*(1+c/100);
percent = ((g-x)/x)*100;


    if (percent==0) {
        printf("%d %lf  %lf%% \n",i,g,c);

    }else
    printf("%d %lf  %lf%% \n",i,g,percent);

    }

}