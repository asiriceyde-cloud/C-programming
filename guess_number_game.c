//program for guess the number game
//Name:Gladys Opondo
//RegNo.:PA106/G/28789/25


#include <stdio.h>

int main() {
    int secretNumber, guess;

	
//prompt the user to enter there bnumber
    printf("Enter a secret number (1-20): ");
    scanf("%d", &secretNumber);

    do {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);

        if (guess > secretNumber)
            printf("Too high!\n");
        else if (guess < secretNumber)
            printf("Too low!\n");
        else
            printf("Congratulations!\n");

    } while (guess != secretNumber);

    return 0;
}
