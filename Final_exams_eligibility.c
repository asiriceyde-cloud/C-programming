/*
Name: Gladys Opondo
Reg no: PA106/G/28789/25
Description:a program to check if students are eligible for their final exams
*/

#include <stdio.h>

int main() {
    float attendance, average_marks;

    // Input values
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &average_marks);

    // Check eligibility
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}