#include <stdio.h>
#define ARR_LENGTH 3

void printBoard(int a[ARR_LENGTH][ARR_LENGTH]) {
    for (int i = 0; i < ARR_LENGTH; i++) {
        for (int j = 0; j < ARR_LENGTH; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int board[ARR_LENGTH][ARR_LENGTH] = {0};
    int x = 0, y = 0;
    int player = 1;
    while(1) {
        printBoard(board);
        printf("player %d turn. Add your axis on where you want to play (x/y)\n",player);
        scanf("%d %d", &x, &y);
        printf("You chose %d %d \n", x, y);
        if(x < 0 || x >= ARR_LENGTH || y < 0 || y >= ARR_LENGTH) {
            printf("This is an invalid answer, try again\n");
            continue;
        }
            if(board[x][y] != 0) {
                printf("This position is already taken, try again\n");
                continue;
            }
            board[x][y] = player;
        player = (player == 1) ? 2 : 1;
    }

return 0;
}