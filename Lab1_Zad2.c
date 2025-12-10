//
// Created by bartosz on 12/10/2025.
//

#include <stdio.h>
int main() {
    char max;
    char given;


printf("Please enter a character: ");
    scanf(" %c", &max);

    for (int i=0 ; i<=1 ; i++) {
        printf("Please enter another character: ");
        scanf(" %c", &given);

        if (given>max) {
            max=given;

        }
    }
    printf("The last letter in alphabet is : %c",max);
}
