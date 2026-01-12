#include <stdio.h>
#include <windows.h>
//
// Created by bartosz on 1/12/2026.
//
 int fibonacci(int n) {
    if (n<=1)return n;

        return fibonacci(n-1)+fibonacci(n-2);


}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n,i;
    printf("Podaj długość ciągu Fibonacciego: ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
        printf("%d. %d \n ",i,fibonacci(i));



}