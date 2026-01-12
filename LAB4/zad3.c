#include <stdio.h>


float potęga(float x,int y) {
    printf(" %f i %d \n",x,y);
    if (y<0) {
        x=1.f/x;
        y = -y;
    }
if (y==0) return 1;
    return  x*potęga(x,y-1);

}
int main()
{
    float x;
    int y;
    printf("Podaj dwie liczby : ");
    scanf("%f", &x);
    scanf("%d", &y);

    printf("Pierwsza liczba podniesiona do potęgi liczby drugiej: %f", potęga(x,y));

    return 0;
}