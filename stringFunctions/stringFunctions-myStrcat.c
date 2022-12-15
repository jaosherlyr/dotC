//create your own version of strng functions
#include <stdio.h>
char * myStrcat(char * dest, char * source); //will connect the second array to the first array
int main() {
    char arrA[20] = "This is a Test ";
    char arrB[20] = "Array";

    printf("Before strcat: arrA = %s, arrb = %s\n", arrA, arrB);

    //function calls
    myStrcat(arrA, arrB);

    printf("After strcat: arrA = %s\n", arrA);
}
char * myStrcat(char * dest, char * source) {
    //move pointer to null character in first array
    while (*dest != '\0') {
        dest++;
    }

    //add the second string
    while (*source != '\0') {
        *dest = *source;
        dest++;
        source++;
    }

    //initilize last null element
    *dest = '\0';

    return dest;
}