#include <stdio.h>
#include <stdbool.h>
int main(void)
{
int length = 9;
    int num[length];
    bool changed = false;
    for (int i = 0; i <= length; i++) {
        printf("Gib eine beliebige Zahl ein:\n");
        scanf("%d", &num[i]);
    }

    do {
        changed=false;
        for(int i=0; i < length; i++) {
            if (num[i]>num[i+1]) {
                int temp = num[i];
                num[i]=num[i+1];
                num[i+1]=temp;
                changed = true;
            }

        }
    } while (!changed);
    length = 9;
    for(int i=0; i < length; i++) {
        printf("\nnr: %d", num[i]);
    }


    return 0;
}
