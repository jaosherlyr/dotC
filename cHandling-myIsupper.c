//creating my own C handling functions
#include <stdio.h>
int myIsupper(char elem); //will return 0 if NOT alphabet and a nonzero value if alphabet
int main() {
    char valA = 'A';
    char valB = 'a';

    printf("%d\n", myIsupper(valA));
    printf("%d\n", myIsupper(valB));
}
int myIsupper(char elem) {
    int temp = 0;

    if (65 <= elem && elem <= 90) {
        temp = 256;
    }

    return temp;
}