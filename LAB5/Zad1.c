#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
int k=0;
float pi(int n ) {
    for (int i =0; i <n; i++) {
        float losowaX=(float)rand()/RAND_MAX;
        float losowaY=(float)rand()/RAND_MAX;
        if (losowaY<sqrt(1-(losowaX*losowaX))) {
            k++;
        }
    }
    return 4*(float)k/ (float)n ;
}
int main() {
    float czas = 0;
srand(time(NULL));

czas=clock();
        printf("Liczba Pi dla 100 = %f \n", pi(100));
    printf("Czas wykonania = %f \n", (clock()-czas)/CLOCKS_PER_SEC);
        printf("Liczba Pi dla 1000 = %f \n", pi(1000));
    printf("Czas wykonania = %f \n", (clock()-czas)/CLOCKS_PER_SEC);
        printf("Liczba Pi dla 10000 = %f \n", pi(10000));
    printf("Czas wykonania = %f \n", (clock()-czas)/CLOCKS_PER_SEC);
        printf("Liczba Pi dla 100000 = %f \n", pi(100000));
    printf("Czas wykonania = %f \n", (clock()-czas)/CLOCKS_PER_SEC);
        printf("Liczba Pi dla 1000000 = %f \n", pi(1000000));
    printf("Czas wykonania = %f \n", (clock()-czas)/CLOCKS_PER_SEC);

}