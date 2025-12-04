//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if(n<0){
        printf("Ërror");
        return -1;
    }
    long long fibo, first = 0, second =1;

    for(int i= 0; i<n; i++){

        printf("%lld ", first);
        fibo = first +second;
        first = second;
        second = fibo;
    }


    return 0;
}
