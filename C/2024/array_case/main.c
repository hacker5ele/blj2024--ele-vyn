#include <stdio.h>
#define FIELD_SIZE 4

int main(void)
{
    int posX = 0;
    int posY = 0;
    int field[FIELD_SIZE][FIELD_SIZE] = {
        {5, 3, 8},
        {4, 2, 0},
        {1, 7, 6}

    for (int i = 0; i < FIELD_SIZE; i++) {
        for(int j = 0; j < FIELD_SIZE; j++)
            field[posX][posY] = [i][j];
    }
    return 0;
}
