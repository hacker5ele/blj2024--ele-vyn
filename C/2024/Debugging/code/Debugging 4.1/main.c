#include <stdio.h>

int main() {
    char thema[] = "Thermonukleare Reaktion";

    printf("Wortumkehrer");
    for (int i = 30; i >= 0; i--) {
        printf("Buchstabe %d: %c\n", i, thema[i]);
    }
    return 0;
}

