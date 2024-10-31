#include <stdio.h>
#include <string.h>

typedef struct {
    char topic[20+1];
    char association[30+1];
}TClub;


typedef struct  {
    char name[50+1];
    int birthYear;
    int weightKG;
    int heightCM;
    TClub club;
} TPerson;

TPerson family[4];

void initfamily() {

    strcpy(family[0].name,"John Doe");
    family[0].birthYear = 1981;
    family[0].weightKG = 91;
    family[0].heightCM = 196;
    strcpy(family[0].club.topic, "topic");
    strcpy(family[0].club.association, "asso");

    strcpy(family[1].name,"Jane Doe");
    family[1].birthYear = 1980;
    family[1].weightKG = 64;
    family[1].heightCM = 178;
    strcpy(family[1].club.topic, "topic");
    strcpy(family[1].club.association, "asso");

    strcpy(family[2].name,"Jack Doe");
    family[2].birthYear = 2008;
    family[2].weightKG = 40;
    family[2].heightCM = 163;
    strcpy(family[2].club.topic, "topic");
    strcpy(family[2].club.association, "asso");

    strcpy(family[3].name,"Judy Doe");
    family[3].birthYear = 2015;
    family[3].weightKG = 30;
    family[3].heightCM = 124;
    strcpy(family[3].club.topic, "topic");
    strcpy(family[3].club.association, "asso");
}

void printPerson(TPerson person) {
    printf("Name: %s\n", person.name);
    printf("BirthYear: %d\n", person.birthYear);
    printf("Weight: %d\n", person.weightKG);
    printf("Height: %d\n", person.heightCM);
    printf("Topic: %s\n", person.club.topic);
    printf("Association: %s\n", person.club.association);
    printf("-------------------------------------\n");
}

void printFamily() {
    for(int i = 0; i < 4; i++) {
        printPerson(family[i]);
    }
}

TPerson findOldestFamilyMemeber() {
    TPerson oldest = family[0];
    for(int i = 1; i < 4; i++) {
        if(family[i].birthYear < oldest.birthYear) {
            oldest = family[i];
        }
    }
    return oldest;
    }

int main(void) {
    initfamily();
    printf("Unorganized: \n");
    printFamily();

    TPerson oldest = findOldestFamilyMemeber();
    printf("Oldest person: \n");
    printPerson(oldest);

    int choice;
    char continueChoice;

do{
    printf("Choose sorting criterium\n");
    printf("1. Name\n");
    printf("2. Birthyear\n");
    printf("3. Weight\n");
    printf("4. Height\n");
    scanf("%d", &choice);


    for (int i = 0; i < 4 - 1; i++) {
        for (int j = i + 1; j < 4; j++) {
            switch(choice) {

                case 1:
                    if(strcmp(family[i].name, family[j].name) > 0) {
                        TPerson temp = family[i];
                        family[i] = family[j];
                        family[j] = temp;
                    }

                break;
                case 2:
                    if (family[i].birthYear > family[j].birthYear) {
                        TPerson temp = family[i];
                        family[i] = family[j];
                        family[j] = temp;
                    }

                break;
                case 3:
                    if (family[i].weightKG > family[j].weightKG) {
                        TPerson temp = family[i];
                        family[i] = family[j];
                        family[j] = temp;
                    }

                break;
                case 4:
                    if (family[i].heightCM > family[j].heightCM) {
                        TPerson temp = family[i];
                        family[i] = family[j];
                        family[j] = temp;
                    }

                break;
                default:
                    printf("This is invalid. Press a number between 1-4.\n");
                break;
            }
        }
    }
    printFamily();

    printf("Would you like to sort again? (y/n): ");
    scanf(" %c", &continueChoice);

} while (continueChoice == 'y' || continueChoice == 'Y');

printf("Exiting program.\n");

    return 0;
}
