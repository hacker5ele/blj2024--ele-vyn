#include <stdio.h>

void makeUppercase(char *c) {
    if(*c >= 'a' && *c <= 'z') {
        *c = *c- 32;
    }
}



int main(void){
    char c1 = 'a';
    char c2 = '!';
    makeUppercase (&c1);
    makeUppercase (&c2);
    printf("%c%c", c1, c2);

    return 0;
}
