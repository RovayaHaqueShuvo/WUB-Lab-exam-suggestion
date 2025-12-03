//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Third Number: ");
    scanf("%d", &num3);
    if (num1 > num2 && num1 > num3) {
        printf("Number %d is the largest number", num1);

    }
    else if (num2 > num1 && num2 > num3) {
        printf("Number %d is the largest number", num2);
    }
    else {
        printf("Number %d is the largest number", num3);
    }
}