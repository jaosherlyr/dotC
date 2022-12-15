//creating my own C handling functions
#include <stdio.h>
int myIslower(char elem); //will return 0 if NOT alphabet and a nonzero value if alphabet
int main() {
    char valA = 'A';
    char valB = 'a';

    printf("%d\n", myIslower(valA));
    printf("%d\n", myIslower(valB));
}
int myIslower(char elem) {
    int temp = 0;

    if (97 <= elem && elem <=122) {
        temp = 512;
    }

    return temp;
}