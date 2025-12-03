//
// Created by rhshu on 11/29/2025.
//

#include <stdio.h>

int main()
{
    int n,m,x,y;

    scanf("%d %d %d %d", &n,&m,&x,&y);

    int matrix1[n][m];
    int matrix2[x][y];
    int sum[n][m];
    int count1=0, count2=0 ;
    if(n!=x && m!=y){

        printf("Matrix Sum can't possibile. e.g. 2x2:2x2; 3x3:3x3");
        return -1;
    }

    printf("Enter first Matrix element: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            scanf("%d",&matrix1[i][j]);
            count1 += matrix1[i][j];
        }

    }

    printf("Enter Second Matrix elementL: ");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            scanf("%d",&matrix2[i][j]);
            count2 += matrix1[i][j];
        }
    }

    printf("First Matrix elementLl: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("First Matrix element: \n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of Matrix's element: \n");
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    printf("First matrix element sum is : %d", count1);
    printf("Second matrix element sum is : %d", count2);
    printf("both matrix element sum is : %d", count1+count2);

    return 0;
}
