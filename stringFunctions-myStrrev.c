//create your own version of strng functions
#include <stdio.h>
#include <stdlib.h>
char * myStrrev(char * arr); //will return a pointer to the destination array
int main() {
    char arr[] = "desserts";

    printf("Before strcpy: arrB = %s\n", arr);

    printf("After strcpy: arrB = %s\n", myStrrev(arr));
}
char * myStrrev(char * arr) {
    char * arrRev, * ptr;
    int temp, ctr;

    ptr = arr;

    for (temp = 0; *ptr != '\0'; ptr++) {
        temp++;
    }

    arrRev = (char *)malloc(sizeof(char) * temp + 1);

    if (arrRev != NULL) {
        for (ctr = 0; temp >= 1; ctr++) {
            arrRev[ctr] = arr[temp - 1];
            temp--;
        }

        arrRev[ctr] = '\0';
    }

    return arrRev;
}