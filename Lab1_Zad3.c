#include <math.h>
#include <stdio.h>
//
// Created by bartosz on 12/10/2025.
//
int main() {


unsigned char a,b;


printf("Enter First Number: ");
scanf("%hhu",&a);


printf("Enter Second Number: ");
    scanf("%hhu",&b);


printf("Numbers given 1:%hhu and 2:%hhu \n ",a,b);

const unsigned char c = a | b;
const unsigned char d = a & b;
const unsigned char e = a ^ b;

printf("Result from OR in decimal: %hhu \n",c);
printf("Result from AND in decimal: %hhu \n",d);
printf("Result from XOR in decimal: %hhu \n",e);


}

// or => | // and => & // xor => ^