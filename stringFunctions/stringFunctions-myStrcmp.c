//create your own version of strng functions
#include <stdio.h>
int myStrcmp(char * arrA, char * arrB); //will compare two strings
int main() {
    char arrA[] = "tanker";
    char arrB[] = "thanks";
    int val;

    //function call
    val = myStrcmp(arrA, arrB);

    printf("%d\n",  val);
}
int myStrcmp(char * arrA, char * arrB) {
    int val = 0;

    while (*arrA != '\0') {
        if (*arrA != *arrB) {
            val = *arrA - *arrB;
            break;
        }

        arrA++;
        arrB++;
    }

    //scenario where first string is shorter 
    if (*arrB != '\0' && val == 0) {
        val = 0 - *arrB;
    }

    return val;
}