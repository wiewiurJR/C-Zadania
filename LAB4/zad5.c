#include <stdio.h>
#include <windows.h>

int czy_pierwsza(int N) {
if (N<1)
    return 0;
    if (N==1)
        return 1;

        for (int i =2;  i*i<=N; i++)
            if (N%i==0) {
                return 0;
            }
    return 1;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
int n;
    printf("Wpisz liczbę");
scanf("%d",&n);
printf("N=%d \n",n);
    printf("Liczby pierwsze z zakresu od 1 do %d \n",n);
for (int i=0; i<=n; i++) {
    if (czy_pierwsza(i)){
        printf("%d \n",i);
    }
}
};
