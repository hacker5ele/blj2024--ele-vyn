#include <stdio.h>
#define ARR_LENGTH 3

void createBoard(int a[ARR_LENGTH][ARR_LENGTH]) {
    for (int i = 0; i < ARR_LENGTH; i++) {
        for (int j = 0; j < ARR_LENGTH; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int a[ARR_LENGTH][ARR_LENGTH] = {0};
    int x, y;
    int player = 1;
    while(1) {
        createBoard(a);
        printf("player %d turn. Add your axis on where you want to play (x/y)\n",player);
        scanf("%d %d", &x, &y);
        printf("You chose %d %d \n", x, y);
        if(x < 0 || x >= 3 || y < 0 || y >= 3) {
            printf("This is an invalid answer, try again\n");
            continue;
        }
            if(a[x][y] != 0) {
                printf("This position is already taken, try again\n");
                continue;  // If the position is already taken, ask for input again
            }
            a[x][y] = player;
        player = (player == 1) ? 2 : 1;
    }

return 0;
}