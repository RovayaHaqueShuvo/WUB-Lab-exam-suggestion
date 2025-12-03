//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter Student result: ");
    scanf("%d", &num1);
    printf("Enter Student attendence: ");
    scanf("%d", &num2);
    if (num1>=40 && num2>=75) {
        printf("Your candidate passed");
    }
    else {
        printf("Your candidate failed");
    }
}