//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main(void) {
    int a, b;
    int sum, sub, mul, modulo;
    float div;

    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    modulo = a % b;
    div = (float)a / b;

    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Mul = %d\n", mul);
    printf("Mod = %d\n", modulo);
    printf("Div = %.2f\n", div);

    return 0;
}