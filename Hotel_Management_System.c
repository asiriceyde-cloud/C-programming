//Description: a c programm for Hotel Management System Using Arrays
//Name:Gladys Opondo
//RegNo.PA106/G/28789/25


#include <stdio.h>

int main() {
    float revenue[7];  
    float total = 0, average;
    int i;

    printf("=== Hotel Weekly Revenue Tracker ===\n");

    
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: KSh. ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];  
    }

    
    average = total / 7;

    
    printf("\n=== Weekly Summary ===\n");
    printf("Total Weekly Revenue: KSh. %.2f\n", total);
    printf("Average Daily Revenue: KSh. %.2f\n", average);

    return 0;
}
