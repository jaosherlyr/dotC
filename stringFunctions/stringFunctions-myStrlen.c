//create your own version of strng functions
#include <stdio.h>
int myStrlen(char * arr); //will count the length of the string
int main() {
    char arrA[50] = "This is a Test ";
    int len;

    //function call
    //len = myStrlen(arrA);

    printf("The length of the array A is %d\n",  myStrlen(arrA));
}
int myStrlen(char * arr) {
    int ctr = 0;

    while (*arr != '\0') {
        ctr++;
        arr++;
    }

    return ctr;
}