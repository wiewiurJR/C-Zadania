#include <math.h>
#include <stdio.h>
int main() {
    int n, i = 0;
    float tablica[10];
    float suma = 0.0;
    float min,max,odchylenie=0.f;
    printf("Ile liczb: ");
    scanf("%d", &n);
    size_t x = sizeof(tablica)/sizeof(tablica[0]);
    if (n >x && n!=0) {
        printf("Nie ma miejsc na liczby");
        return 1;

    }
    printf("Podaj kolejne liczby:\n");

    while(i<n)
    {
        scanf("%f", &tablica[i]);
        i++;
    }
    for(i=0; i<n; i++) {
        suma = suma + tablica[i];
        min = tablica[0];
        if (min>tablica[i]) min = tablica[i];
        if (max<tablica[i]) max = tablica[i];
    }
    float suma_od = 0.f;
  for (i=0;i<n;i++) {
      suma_od += (tablica[i] - (suma/n))*(tablica[i]-(suma/n));
  }
    odchylenie = sqrt(suma_od/(n));
    printf("Suma = %f\n", suma);
    printf("Srednia = %f\n", suma/n);
    printf("Odchylenie standardowe = %f\n", odchylenie);
    return 0;
}