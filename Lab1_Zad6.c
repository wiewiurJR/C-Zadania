#include <stdio.h>
//
// Created by bartosz on 12/11/2025.
//
int main() {
    int a,b;

    printf("Enter first number:");
    scanf(" %d",&a);
    printf("Enter second number:");
    scanf(" %d",&b);

if (a%b!=0) {
    printf("The number is not divisible:  %d\n",b);

}else printf("The number is divisible: %d",a);


}