#include <stdio.h>

void printArray(int array[], int length);

int main(void)
{
   int numbers[] = {1, 2, 4};
    int numbers2[7];
    int numbers3[7] = {0};
    int numbers4[7] = {1};
    int length = sizeof(numbers4)/sizeof(int);

   printArray(numbers4, length);

    //printf("%llu\n", sizeof(numbers)/sizeof(int));



    return 0;
}

void printArray(int array[], int length) {
    printf("%x\n", array);
    int lenght = sizeof(array)/sizeof(int);
    for(int i = 0; i < lenght; i++ ) {
        printf("%d\n", array[i]);
    }
}
