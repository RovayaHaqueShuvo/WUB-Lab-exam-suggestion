//
// Created by rhshu on 11/29/2025.
//
#include  <stdio.h>
int main() {
    int n;
    int count = 0;
    printf("Enter the number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            count += i;
        }
    }

    printf("Sum of even numbers is %d", count);
    return 0;
}