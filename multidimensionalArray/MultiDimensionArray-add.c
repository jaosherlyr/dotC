//create a function that will return the sum of two matrices
#include <stdio.h>
#include <stdlib.h>
typedef int MyMatrix[4][3];
void displayArray(int ** array);
int ** addTwoDimensional(MyMatrix arrA, MyMatrix arrB);
int main() {
    //declare pointer to resulting array
    int ** result;

    //initialize array
    MyMatrix A = {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}, {3, 2, 1}};
    MyMatrix B = {{2, 1, 4}, {6, 3, 1}, {7, 3, 3}, {6, 3, 9}};

    //call function
    result = addTwoDimensional(A, B);
    displayArray(result);
}
int ** addTwoDimensional(MyMatrix arrA, MyMatrix arrB) {
    int ** array;
    int row, col, ctr;

    //allocate memory to the array
    array = (int **)malloc(4 * sizeof(int *));

    for (ctr = 0; ctr < 4; ctr++) {
        array[ctr] = (int *)malloc(3 * sizeof(int));
    }


    //get the sums
    if (array) {
        for (row = 0; row < 4; row++) {
            for (col = 0; col < 3; col++) {
                array[row][col] = arrA[row][col] + arrB[row][col];
            }
        }
    }

    return array;
}
void displayArray(int ** array) {
    int row, col;

    for (row = 0; row < 4; row++) {

        for (col = 0; col < 3; col++) {
            printf("%d\t", array[row][col]);
        }

        printf("\n");
    }
}