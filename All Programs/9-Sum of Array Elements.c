//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {
    int n, count=0;
    int arr[n];
    printf("Number of array elements: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        count += arr[i];
    }

    printf("Sum Array elements is: %d",count);
}