//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {

    float num1, num2;
    char operatorkey;
    printf("Calculate your numbers: ");
    if (scanf("%f %c %f", &num1, &operatorkey, &num2) != 3) {
        printf("Error: Invalid input format!\n");
        return 1;
    }

    switch (operatorkey) {
        case '+':
            float sum =(float) num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
            break;
        case '-':
            float sub =(float) num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, sub);
            break;
        case '*':
            float mul =(float) num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, mul);
            break;
        case '/':
            float div =(float) num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, div);
            break;
        default:
            printf("Invalid operator");

    }

    return 0;
}