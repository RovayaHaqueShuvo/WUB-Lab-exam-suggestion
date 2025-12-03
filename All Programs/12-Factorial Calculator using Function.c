//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int factorial(int n);


int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int fact = factorial(n);

    if (fact != -1) {
        printf("%d! = %d\n", n, fact);
    }


    return 0;
}
int factorial(int n) {
    int result = 1;

    if (n < 0) {
        printf("factorial would be based on integer number");
        return -1;
    }

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}