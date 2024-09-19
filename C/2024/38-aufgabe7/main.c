#include <stdio.h>
#include <stdbool.h>

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
void anrede3(int gender2) {
    if (gender2 == 1) {
        printf("Guten Tag Frau XY\n");
    } else if (gender2 == 0) {
        printf("Guten Tag Herr XY\n");
    } else {
        printf("Fehler: Ungueltiger Parameterwert. Bitte geben Sie 0 oder 1 ein.\n");
    }
}
bool anrede4(int gender2) {
    if (gender2 == 1) {
        printf("Guten Tag Frau XY\n");
        return false;  // No error
    } else if (gender2 == 0) {
        printf("Guten Tag Herr XY\n");
        return false;  // No error
    } else {
        return true;   // Error occurred, invalid value
    }
}
int main() {
    anrede1();
    anrede2(0);
    anrede2(1);
    anrede3(1);
    anrede3(0);
    anrede3(5);

    if (anrede4(1)) {   // Calls anrede4 with 1 (no error expected)
        printf("Fehler: Ungueltiger Parameterwert. Bitte geben Sie 0 oder 1 ein.\n");
    }

    if (anrede4(0)) {   // Calls anrede4 with 0 (no error expected)
        printf("Fehler: Ungueltiger Parameterwert. Bitte geben Sie 0 oder 1 ein.\n");
    }

    if (anrede4(2)) {   // Calls anrede4 with invalid value (2)
        printf("Fehler: Ungueltiger Parameterwert. Bitte geben Sie 0 oder 1 ein.\n");
    }
    return 0;
}
