//creating my own C handling functions
#include <stdio.h>
int myIsalpha(char elem); //will return 0 if NOT alphabet and a nonzero value if alphabet
int main() {
    char valA = ' ';
    char valB = 'a';

    printf("%d\n", myIsalpha(valA));
    printf("%d\n", myIsalpha(valB));
}
int myIsalpha(char elem) {
    int temp = 0;

    if (65 <= elem && elem <= 90 || 97 <= elem && elem <=122) {
        temp = 1024;
    }

    return temp;
}