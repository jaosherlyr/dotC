//creating my own C handling functions
#include <stdio.h>
int myIsdigit(char elem); //will return 0 if NOT a digit and a nonzero value if digit
int main() {
    char valA = '8';
    char valB = ' ';

    printf("%d\n", myIsdigit(valA));
    printf("%d\n", myIsdigit(valB));
}
int myIsdigit(char elem) {
    int temp = 0;

    if (48 <= elem && elem <= 57) {
        temp = 2048;
    }

    return temp;
}