//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int main() {
    int lines[]={1,2,3,1,2,3,4,5};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j<lines[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}