//
// Created by XYZ on 07.02.2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wymieszaj(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int k = rand() % n;
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}
int main() {
    int K,N;
    scanf("%d\n",&N);
    scanf("%d",&K);
    int arr[100];
    for (int i =0; i<N; i++) {
        arr[i]=i;
    }
    for (int i = 0; i <N; i++) {
        printf("%d ",arr[i]);
    }
        printf("\n");
        wymieszaj(arr,N);

        for (int i = 0; i <N; i++) {
            printf("%d ",arr[i]);
        }
            printf("\n");
            printf("\n");

printf("K=%d",K);
printf("\n");
printf("N=%d \n",N);

            for (int i = 0; i <K; i++) {
                printf("%d \n",arr[i]);
            }

}