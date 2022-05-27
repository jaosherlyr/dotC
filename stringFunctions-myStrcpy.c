//create your own version of strng functions
#include <stdio.h>
char * myStrcpy(char * dest, char * source); //will return a pointer to the destination array
int main() {
    char arrA[50] = "This is a Test ";
    char arrB[20] = "Yeet";

    printf("Before strcpy: arrB = %s\n", arrB);

    //function call
    myStrcpy(arrB, arrA);

    printf("After strcpy: arrB = %s\n", arrB);
}
char * myStrcpy(char * dest, char * source) {
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }

    //initilize last null element
    *dest = '\0';

    return dest;
}