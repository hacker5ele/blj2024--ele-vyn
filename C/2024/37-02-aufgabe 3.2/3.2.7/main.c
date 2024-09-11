#include <stdio.h>

int main(void) {

    printf("Speicherbedarf int: %d Byte (s)\n", sizeof(int));
    char p = 80;
    char x = 120;
    short s = 324;
    int i = 3200;
    long l = 328932;
    float f = 3.141593;
    double d = 2.717200;
    printf("Speicherbedarf float f: %d Byte (s)\n", sizeof(f));
    printf("Speicherbedarf double d: %d Byte (s)\n", sizeof(d));
    printf("WERTE DER VARIABLEN \n");
    printf("--------------------------------------------------------------------------------------------- \n");
    printf("Variable\tZeichen\t\tdez\t\thex\t\tokt\n");
    printf("--------------------------------------------------------------------------------------------- \n");
    printf("c [char]\t'%c'\t\t%d\t\t%x\t\t%o\n", p,p,p,p);
    printf("c [char]\t'%c'\t\t%d\t\t%x\t\t%o\n", x, x, x, x);
    printf("s [short]\t\t\t%d\t\t%x\t\t%o\n", s, s, s);
    printf("i [int]\t\t\t\t%d\t\t%x\t\t%o\n", i, i, i);
    printf("l [long]\t\t\t%d\t\t%x\t\t%o\n", l, l, l);
    printf("f [float]\t\t\t%f\t%x\t%o\n", f, f, f);
    printf("d [double]\t\t\t%f\t%x\t%o\n", d, d, d);


return (0);
}

