//printf the address of the multidimensional array and determine the major order
#include <stdio.h>

int main() {
    int arr[2][2];
    unsigned char addArr[4];
    int x, y, z = 0;

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 2; y++) {
            addArr[z++] = &arr[x][y];
            printf("%p\t", &arr[x][y]);
        }
        printf("\n");
    }
}