#include <stdio.h>

void anrede1() {
    printf("Guten Tag Herr XY\n");
}
void anrede2(int gender) {
    if (gender == 0) {
        printf("Guten Tag Herr XY\n");
    } else {
        printf("Guten Tag Frau XY\n");
    }
}
int main() {
    anrede1();
    anrede2(0);
    anrede2(1);
    anrede3(0,1);
    return 0;
}