//create your own version of strng functions
#include <stdio.h>
#include <string.h>
int myStrlen(char * arr);//will count the length of the string

int main() {
    char arrA[] = "This is a test";
    char arrB[] = "This is the test";
    int len;

    //function calls
    len = myStrlen(arrA);

    printf("The length of the array is %d\n", len);

    //comparison
    printf("\nTo compare:\n");
    printf("The length of the array is %d\n", strlen(arrA));

}
int myStrlen(char * arr) {
    int ctr = 0;

    while(*arr != '\0') {
        ctr++;
        arr++;
    }

    return ctr;
}