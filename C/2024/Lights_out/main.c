#include <stdio.h>
#include <stdlib.h>
#define FIELD_SIZE 5

void printBoard(int a[FIELD_SIZE][FIELD_SIZE]) {
    for (int i = 0; i < FIELD_SIZE; i++) {
        for (int j = 0; j < FIELD_SIZE; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int board[FIELD_SIZE][FIELD_SIZE] = {
        {1, 1, 1, 1, 1,},
          {1, 1, 1, 1, 1,},
        {1, 1, 1, 1, 1,},
{1, 1, 1, 1, 1,},
{1, 1, 1, 1, 1,}
};
    printBoard(board);





    return 0;
}
