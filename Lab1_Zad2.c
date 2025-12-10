//
// Created by bartosz on 12/10/2025.
//

#include <stdio.h>
int main() {
    int Number[] = {};
    int BigNumb;






    scanf("%d",&Number[0]);
    printf("First Number: %d \n",Number[0]);
    scanf("%d",&Number[1]);
    printf("Second Number: %d \n",Number[1]);
    scanf("%d",&Number[2]);
    printf("Third Number: %d \n",Number[2]);
    if (Number[0] > Number[1] && Number[0]> Number[2]){  BigNumb = Number[0]; }

    else if (Number[1] > Number[2] && Number[1]>Number[0]){ BigNumb = Number[1]; }

    else{ BigNumb = Number[2]; }


    printf("The biggest Number is: %d",BigNumb);
}
