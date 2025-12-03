//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int main() {
    for (int i = 0; i <= 30; i++) {
        if (i >= 5 && i <= 10 || i >= 25 && i <= 30) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
