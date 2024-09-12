#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int playAgain = 1;
    int maxTries = 5;  // Start with 5 tries

    // Welcoming message
    printf("Welcome to the Guessing Game!\n");
    printf("In each round, I will think of a number between 1 and 20.\n");
    printf("Try to guess the number! In every new round, you'll have fewer attempts.\n");
    printf("Let's get started!\n\n");

    while (playAgain == 1) {
        int mynum, usernum, attempts = 0;
        srand(time(0));
        mynum = (rand() % 20) + 1;  // Generate random number between 1 and 20

        printf("I have a number in my mind (1-20). Can you guess it? You have %d tries!\n", maxTries);

        // Loop until the user guesses correctly or runs out of attempts
        while (attempts < maxTries) {
            printf("Enter your Guess (Attempt %d/%d): ", attempts + 1, maxTries);
            scanf("%d", &usernum);
            attempts++;

            if (mynum == usernum) {
                printf("You are Right!\n");
                break;  // Exit the loop if guessed correctly
            } else if (mynum > usernum) {
                printf("My number is bigger than %d. Try Again\n\n", usernum);
            } else {
                printf("My number is smaller than %d. Try Again\n\n", usernum);
            }
        }

        // If user used all attempts and didn't guess correctly
        if (attempts == maxTries && mynum != usernum) {
            printf("Sorry, you've used all your tries. My number was %d.\n", mynum);
        }

        // Ask if the player wants to play again
        printf("Would you like to play again? y=1, n=2: ");
        scanf(" %d", &playAgain);

        // Decrease the number of tries for the next round, but ensure it doesn't go below 1
        if (playAgain == 1) {
            maxTries--;
            if (maxTries < 1) {
                maxTries = 1;  // Ensure at least 1 try
            }
        }
    }

    // Goodbye message
    printf("Thanks for playing! Hope to see you again. Goodbye!\n");

    return 0;
}

