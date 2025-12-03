//
// Created by rhshu on 11/29/2025.
//
#include <stdio.h>
int main() {
    int marks;
    char grade;
    printf("Enter the marks: ");
    scanf("%d",&marks);

    if (marks<0 || marks>100) {
        printf("Invalid marks!\n");
        return 1;
    }


    if (marks>=80) {
        grade = 'A';
    }
    else if (marks>=60) {
        grade = 'B';
    }
    else if (marks>=40) {
        grade = 'C';
    }else {
        grade = 'F';
    }
    printf("Grade = %c -->",grade);

    switch (grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Avarage");
            break;
        case 'F':
            printf("Fail");
            break;
    }

    return 0;
}