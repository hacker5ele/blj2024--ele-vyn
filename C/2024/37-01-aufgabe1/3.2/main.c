#include <stdio.h>

int main(void) {
    int a = 3;
    char c = 7;
    float z = 5.67;
    double d = 5;
    printf("Speicherbedarf int: %c Byte (s)\n", a);
    printf("Speicherbedarf char: %d Byte (s)\n", c);
    printf("Speicherbedarf float: %f Byte (s)\n", z);
    printf("Speicherbedarf double: %el Byte (s)\n", d);
    printf("Speicherbedarf int: %d Byte (s)\n", sizeof(int));
    printf("Speicherbedarf char: %c Byte (s)\n", sizeof(char));
    printf("Speicherbedarf float: %f Byte (s)\n", sizeof(float));
    printf("Speicherbedarf double: %e Byte (s)\n", sizeof(double));


    return 0;
}


