//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {

    int num;
    printf("Your Number: ");
    scanf("%d", &num);
    if (num%2==0) {
        printf("Your Number is even");
    }else if (num%2!=0) {
        printf("Your Number is odd");
    }

    return 0;
}