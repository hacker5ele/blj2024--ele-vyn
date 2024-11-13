#include <stdio.h>

int isLeapYear(int year);
int daysInMonth(int month, int year);
void printDateInfo(int month, int year);

int main() {
    int month = 10;
    int year = 1997;
    printDateInfo(month, year);
    printf("Type a month and a Year to figure out how many days the month has and if it's a Leap year.\n");
    scanf("%d%d", &month, &year);

    printDateInfo(month, year);

    return 0;
}

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}


int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    if (month <= 12) {
        return 31;
    } if (month >= 13) {
        printf("That's an invalid number!\n");
    }
    return 0;
}


void printDateInfo(int month, int year){
    int days = daysInMonth(month, year);
    if (month <= 12 && month >= 1) {
        printf("The Month %d has in the year %d %d days. \n", month, year, days);

        printf("The Year %d is ", year);
        if(!isLeapYear(year)){
            printf("not a ");
        }else{
            printf("a ");
        }
        printf("Leap year. \n");
    }
}
