#include <stdio.h>
int main() {
    int elem = 176;
    int ctr, temp = 0, expo;

    //get the number of bits
    expo = sizeof(elem) * 8;

    printf("\nThe bit pattern of %d: ", elem);

    for (ctr = expo - 1; ctr >= 0; ctr--) {
        if ((temp % 4) == 0) {
            printf("  ");
        }
        printf("%d ", (elem >> ctr) & 1);
        temp++;
    }

    printf("\n\n");
}