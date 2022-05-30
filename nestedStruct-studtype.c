#include <stdio.h>
#include <string.h>
typedef struct {
    char LName[16];
    char FName[24];
    char MI;
} nameType;
typedef struct {
    nameType name;
    unsigned int ID;
    char Course[8];
    int Year;
} Studtype;
void getStudData(Studtype * stud);
void displayStud(Studtype stud);
int main() {
    Studtype stud, * p;

    p = &stud;

    getStudData(&(*p));
    
    printf("\nData before changing:");
    displayStud(stud);

    strcpy(stud.Course, "BSCS");

    printf("\nData after changing:");
    displayStud(stud);
}
void getStudData(Studtype * stud) {
    printf("\nEnter First Name: ");
    scanf("%s", stud->name.FName);
    printf("\nEnter Last Name: ");
    scanf("%s", stud->name.LName);
    printf("\nEnter Middle Initial: ");
    scanf(" %c", &stud->name.MI);
    printf("\nEnter ID number: ");
    scanf("%u", &stud->ID);
    printf("\nEnter Course: ");
    scanf("%s", stud->Course);
    printf("\nEnter Year: ");
    scanf("%d", &stud->Year);
};
void displayStud(Studtype stud) {
    printf("\nName: %c %c. %s\n", stud.name.FName[0], stud.name.MI, stud.name.LName);
    printf("\nStudent ID: %u\n", stud.ID);
    printf("\nCourse and Year: %s-%d\n", stud.Course, stud.Year);
}