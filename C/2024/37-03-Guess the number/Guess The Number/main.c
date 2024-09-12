#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int playAgain = 1;
    while (playAgain == 1) {
        int mynum,usernum;
        srand(time(0));
        mynum = (rand() % 10) + 1 ;

        printf("I have a number in my mind (1-10). Can you Guess it?\n");

        do {
            printf("Enter your Guess : ");
            scanf("%d",&usernum);

            if ( mynum == usernum ) {
                printf("You are Right!\n");
            }else if( mynum > usernum ) {
                printf("My number is bigger than %d. Try Again\n\n", usernum);
            }else{
                printf("My number is smaller than %d. Try Again\n\n",usernum);
            }
        } while(usernum != mynum);

        // Ask if the player wants to play again
        printf("Would you like to play again? (Yes=1, No=2): ");
        scanf(" %d", &playAgain);



    }
    printf("Thanks for playing!\n");

    return 0;

}
