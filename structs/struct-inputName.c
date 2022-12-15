//create a function that will accept input to struct and a function that will display the inputted values
#include <stdio.h>
struct nameType {
    char FirstName[24];
    char Mi;
    char LastName[16];
    int age;
    char gender;
};
void displayStruct(struct nameType name);
int main() {
    struct nameType name;

    printf("\nEnter First name: ");
    scanf("%s", name.FirstName);
    printf("\nEnter Middle Initial: ");
    scanf(" %c", &name.Mi);
    printf("\nEnter Last name: ");
    scanf("%s", name.LastName);
    printf("\nEnter Age: ");
    scanf("%d", &name.age);
    printf("\nEnter Gender: (F/M) ");
    scanf(" %c", &name.gender);

    displayStruct(name);
}
void displayStruct(struct nameType name) {
    
    printf("\nThe user is a %d year old %s, named %s %c. %s\n", name.age, name.gender == 'F' ? "Female" : "Male", name.FirstName, name.Mi, name.LastName);
}