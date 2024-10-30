#include <stdio.h>
#include "cmake-build-debug/utils.h"

#define FIELD_SIZE 4

/**
 * This programm depicts an all-time classic, the sliding puzzle. The one and
 * only 0 represents the empty slot in the sliding puzzle. Moves (sliding up,
 * down, left, right) are always made relative to the empty slot e.g. in the
 * case of the initial state of the field, only the moves left (swap 0 with 15)
 * and up (swap 0 with 8) can be made. This programm doesn't detect whether the
 * field is sorted. It runs as long as the user doesn't enter a 0.
 *
 * @return 0 if the programm was successfully run.
 */
int main(void) {

    int field[FIELD_SIZE][FIELD_SIZE] = {
        { 0, 15,  1, 13},
        { 8,  5,  2,  3},
        {14,  7,  4,  9},
        {10, 11,  6, 12},
    };


    int posX = 0;
    int posY = 0;

    int input = 0;

    do {




        printf("%d", posX);
        printf("%d", posY);


        printField(FIELD_SIZE, field);
        scanf("%d", &input);




        switch(input) {
            case 0:
                printf("Thanks for playing");
                    return 1;

            case 1:
                if (posY > 0) {
                    field[posX][posY] = field[posX][posY-1];
                    field[posX][posY-1] = 0;
                    posY = posY -1;
                }
            else {
                printf("You can't go left\n");
            }
            break;
            case 2:
                if (posX > 0) {
                    field[posX][posY] = field[posX-1][posY];
                    field[posX-1][posY] = 0;
                    posX = posX -1;
                } else {
                    printf("You can't go up\n");
                }
            break;
            case 3:
                if(posX < FIELD_SIZE -1) {
                    field[posX][posY] = field[posX+1][posY];
                    field[posX+1][posY] = 0;
                    posX = posX +1;
                } else {
                    printf("You can't go down \n");
                }
            break;
            case 4:
                if(posY < FIELD_SIZE -1) {
                    field[posX][posY] = field[posX][posY+1];
                    field[posX][posY+1] = 0;
                    posY = posY + 1;
                } else {
                    printf("You can't go right\n");
                }
            break;
            default:
                printf("This is an invalid Input. Please enter a number between 0-4\n");


        }


            // TODO: Implement the rules for the sliding puzzle. In other words,
            // swap neighboured values (horizontally or vertically) in the 2D array
            // based on user input, but only if the move is legal (bounds checking).

        } while (input != 0);

    return 0;
}
