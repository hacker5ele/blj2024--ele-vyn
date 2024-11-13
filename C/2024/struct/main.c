#include <stdio.h>
#include <string.h>


typedef struct MyStruct {
    int myNumber;
    char myLetter;
    char myName[15+1];
} TMyStruct;



int main(void){

    TMyStruct myStruct;
    myStruct.myNumber = 12;
    myStruct.myLetter = 'A';
    strcpy(myStruct.myName,"John");

    printf("MyNumber: %d\n", myStruct.myNumber);
    printf("MyLetter: %c\n", myStruct.myLetter);
    printf("MyName: %s\n", myStruct.myName);


    return 0;
}
