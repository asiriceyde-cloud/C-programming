//Description: a c programm 
//Name:Gladys Opondo
//RegNo.PA106/G/28789/25


#include <stdio.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int occupied = 0, vacant = 0;

    printf("=== Hotel Chain Occupancy Tracker ===\n");

    // Step 1: Input occupancy data manually
    for (branch = 0; branch < 3; branch++) {
        printf("\n--- Branch %d ---\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            printf("Enter occupancy for Floor %d (1 = occupied, 0 = vacant):\n", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("Room %d: ", room + 1);
                scanf("%d", &chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1)
                    occupied++;
                else
                    vacant++;
            }
        }
    }

    // Step 2: Display results
    printf("\n=== Occupancy Summary ===\n");
    printf("Total Occupied Rooms (All Branches): %d\n", occupied);
    printf("Total Vacant Rooms (All Branches): %d\n", vacant);

    return 0;
}
