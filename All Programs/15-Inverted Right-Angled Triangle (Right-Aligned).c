//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int main(){
    int lines[]={6,5,4,3,2,1,4,3,2,1};

    for(int i = 0; i<10; i++){

        for (int j =0; j<lines[i]; j++){
            printf("*");
        }
        printf("\n");}


    return 0;}