//create a code to chck if the givin multidimensional array is a Magic square
#include <stdio.h>
#define SIZE 3
int magicSquare(int square[SIZE][SIZE]);
int main () {
    int Magic[SIZE][SIZE] = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}};
    int temp;

    temp = magicSquare(Magic);

    //print resut
    printf("The square %s MAGIC\n", (temp == 0) ? "is" : "is NOT");
}
int magicSquare(int square[SIZE][SIZE]) {
    int magic = 0, row, col, temp, sum = 0;

    //set the value to be used to check rest of the square
    for (col = 0; col < SIZE; col++) {
        sum += square[0][col];
        temp = sum;
    }

    //check if all rows have the same sum
    if (magic == 0) {

        for (row = 0; row < SIZE; row++) {
            if (temp == sum) {
                sum = 0;
                
                for (col = 0; col < SIZE; col++) {
                    sum += square[row][col];
                }

            } else {
                magic = 1;
            }
        }

    }

    //check if all columns have the same sum
    if (magic == 0) {

        for (col = 0; col < SIZE; col++) {
            if (temp == sum) {
                sum = 0;
                
                for (row = 0; row < SIZE; row++) {
                    sum += square[row][col];
                }
                
            } else {
                magic = 1;
            }
        }

    }

    //check if the sum of diagonal from LEFT to RIGHT have the same value as temp
    if (magic == 0) {
        sum = 0;

        for (row = 0; row < SIZE; row++) {
            sum  += square[row][row];
        }

        magic = (temp == sum) ? 0 : 1;
    }

    //check if the sum diagonal from RIGHT to LEFT have the same value as temp
    if (magic == 0) {
        sum = 0;
        col = 2;

        for (row = 0; row < SIZE; row++) {
            sum  += square[row][col--];
        }

        magic = (temp == sum) ? 0 : 1;
    }

    return magic;
}