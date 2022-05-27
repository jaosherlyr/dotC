//create a function that will multiple two vertices
#include <stdio.h>
#include <stdlib.h>
typedef int MyMatrix[2][2];
void displayArray(int ** array);
int ** multiplyTwoDimensional(MyMatrix arrA, MyMatrix arrB);
int main() {
    //declare pointer to resulting array
    int ** result;

    //initialize array
    MyMatrix A = {{1, 2}, {3, 4}};
    MyMatrix B = {{2, 0}, {1, 2}};

    //call function
    result = multiplyTwoDimensional(A, B);
    displayArray(result);
}
int ** multiplyTwoDimensional(MyMatrix arrA, MyMatrix arrB) {
    int ** array;
    int row, col, ctr;

    //allocate memory to the array
    array = (int **)malloc(2 * sizeof(int *));

    for (ctr = 0; ctr < 2; ctr++) {
        array[ctr] = (int *)malloc(2 * sizeof(int));
    }


    //get the product
    if (array) {
        for (row = 0; row < 2; row++) {
            for (col = 0; col < 2; col++) {
                array[row][col] = (arrA[row][col] * arrB[row][col]) + (arrA[row][col + 1] * arrB[row + 1][col]);
            }
        }
    }

    return array;
}
void displayArray(int ** array) {
    int row, col;

    for (row = 0; row < 2; row++) {

        for (col = 0; col < 2; col++) {
            printf("%d\t", array[row][col]);
        }

        printf("\n");
    }
}