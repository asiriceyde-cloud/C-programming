//Description:program to compute – Room Occupancy (One Branch)
//Name:Gladys Opondo
//RegNo.:PA106/G/28789/25




#include <stdio.h>

int main() {
    int occupancy[5][10];  
    int occupied, vacant;
    int i, j;

    printf("=== Hotel Room Occupancy Tracker ===\n");

    // Step 1: Input or simulate occupancy data
    // You can manually enter data or simulate it using 0s and 1s
    for (i = 0; i < 5; i++) {
        printf("\nEnter occupancy for Floor %d (1 = occupied, 0 = vacant):\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    // Step 2: Calculate and display occupancy per floor
    printf("\n=== Floor Occupancy Summary ===\n");

    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d rooms | Vacant: %d rooms\n", i + 1, occupied, vacant);
    }

    return 0;
}
