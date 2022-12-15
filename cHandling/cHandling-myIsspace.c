//creating my own C handling functions
#include <stdio.h>
int myIsspace(char elem); //will return 0 if NOT a punct and a nonzero value if punctation character
int main() {
    char valA = '~';
    char valB = ' ';

    printf("%d\n", myIsspace(valA));
    printf("%d\n", myIsspace(valB));
}
int myIsspace(char elem) {
    int temp = 0;

    if (9 <= elem && elem <= 13 || elem == 32) {
        temp = 8192;
    }

    return temp;
}