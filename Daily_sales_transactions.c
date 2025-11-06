/*
Name:Gladys Opondo
Reg no: PA106/G/28789/25
*/

#include <stdio.h>

int main() {
    FILE *file;
    double transaction, totalSales = 0.0;
    int transactionCount = 0;
    
    
    file = fopen("sales.txt", "r");
    
    if (file == NULL) {
        printf("Error opening sales.txt file!\n");
        printf("Please ensure the file exists.\n");
        return 1;
    }
    
    printf("=== Daily Sales Report ===\n");
    printf("Reading transactions from sales.txt...\n\n");
    
    
    while (fscanf(file, "%lf", &transaction) != EOF) {
        printf("Transaction %d: $%.2f\n", ++transactionCount, transaction);
        totalSales += transaction;
    }
    
    
    printf("\n===\n");
    printf("Total Sales for the Day: $%.2f\n", totalSales);
    printf("Number of Transactions: %d\n", transactionCount);
    printf("===\n");
    
    
    fclose(file);
    printf("\nFile successfully closed.\n");
    
    return 0;
}
