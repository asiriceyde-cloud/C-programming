/*
Name: Gladys Opondo
Reg no: PA106/G/28789/25
Description: a program showing how company charges customers based on consumption rule
*/

 #include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user to enter water units
    printf("Enter the number of water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else-if statements
    if (units >= 0 && units <= 30) {
        bill = units * 20.0;
    } 
    else if (units >= 31 && units <= 60) {
        bill = units * 25.0;
    } 
    else if (units > 60) {
        bill = units * 30.0;
    } 
    else {
        printf("Invalid input! Units cannot be negative.\n");
        return 1; // Exit program with error
    }

    // Display bill with 2 decimal places
    printf("Total Water Bill: %.2f KES\n", bill);

    return 0;
}