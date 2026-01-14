#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    printf("Wpisz Liczbę");
    scanf("%d",&n);
    int Pierwsza[n];
    for (int i=1;i<=n;i++) {
        Pierwsza[i]=i;

    }
    for(int i = 2; i*i <= n; i++) {
        if(Pierwsza[i] != -1) {
            for(int j = 2*i; j <=n ; j += i)
            Pierwsza[j] = -1;
        }
    }
    printf("Prime numbers are: \n");
    for(int i=2; i <= n; i++) {
        if(Pierwsza[i] != -1) {
            printf("%d ", i);
        }
    }
}
