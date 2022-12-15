//creating my own C handling functions
#include <stdio.h>
int myIspunct(char elem); //will return 0 if NOT a punct and a nonzero value if punctation character
int main() {
    char valA = '~';
    char valB = '!';

    printf("%d\n", myIspunct(valA));
    printf("%d\n", myIspunct(valB));
}
int myIspunct(char elem) {
    int temp = 0;

    if (33 <= elem && elem <= 47 || 58 <= elem && elem <= 64 || 91 <= elem && elem <= 96 || 123 <= elem && elem <= 126) {
        temp = 4;
    }

    return temp;
}