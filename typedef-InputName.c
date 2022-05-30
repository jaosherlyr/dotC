//create a pogram that will define a new structure data type using typdef and a function to get data and display data
#include <stdio.h>
typedef struct {
    char FirstName[24];
    char Mi;
    char LastName[16];
    int age;
    char gender;
} nameType;
void displayData(nameType name);
nameType getData();
int main() {
    nameType name;

    name = getData();
    displayData(name);
}
nameType getData() {
    nameType name;

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

    return name;
}
void displayData(nameType name) {
    
    printf("\nThe user is a %d year old %s, named %s %c. %s\n", name.age, name.gender == 'F' ? "Female" : "Male", name.FirstName, name.Mi, name.LastName);
}