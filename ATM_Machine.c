//description a c programm to compute ATM withdrawals and balance check
//Name:Gladys Opondo
//RegNo.PA106/G/28789/25


#include <stdio.h>

int main() {
    double balance, withdraw;

    printf("Enter your  account balance: ");
    scanf("%lf", &balance);

   //User enters the amount untill it becomes zero 
    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%lf", &withdraw);
        
        if (withdraw <= 0) {
            printf("Invalid amount. Please enter a positive number.\n");
            continue;
        }

        balance -= withdraw;}

        if (balance > 0) {
            printf("Withdrawal successful. Current balance: %.2lf\n", balance);
        } else {
            printf("Transaction cannot proceed. Insufficient balance.\n");
        }
    }

    printf("\nYour account is now empty or overdrawn.\n");
    return 0;
}
