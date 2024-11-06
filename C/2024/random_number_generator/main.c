#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* getRandomNums(unsigned int n) {
    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    srand(time(NULL));

    for (unsigned int i = 0; i < n; i++) {
        array[i] = (rand() % 100) + 1;
    }

    return array;
}

int main() {
    unsigned int n;

    printf("Enter the number of random numbers: ");
    scanf("%u", &n);

    int* randomNumbers = getRandomNums(n);

    if (randomNumbers == NULL) {
        return 1;
    }


    printf("Generated random numbers:\n");
    for (unsigned int i = 0; i < n; i++) {
        printf("%d ", randomNumbers[i]);
    }
    printf("\n");

    free(randomNumbers);

    return 0;
}

