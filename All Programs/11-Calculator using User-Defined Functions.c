//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int summation(int a, int b) {
    return a + b;
}
int multiplication(int a, int b) {
    return a * b;
}
int subtraction(int a, int b) {
    return a - b;
}
int modulo(int a, int b) {
    return a % b;
}
float division(int a, int b) {
    return (float)a / b;
}

int main() {
    int a, b;
    int sum, multi, subtrac, mod;
    float div;
    printf("Enter number: ");
    scanf("%d %d", &a, &b);

    sum = summation(a,b);
    multi = multiplication(a,b);
    subtrac = subtraction(a,b);
    mod = modulo(a,b);
    div = division(a,b);
    printf("The sum is: %d\n", sum);
    printf("The multiplication is: %d\n", multi);
    printf("The subtraction is: %d\n", subtrac);
    printf("The modulo is: %d\n", mod);
    printf("The division is: %.2f\n", div);

    return 0;
}
