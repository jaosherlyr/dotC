#include <stdio.h>
#include <stdlib.h>
typedef int MyMatrix[2][2];
void displayArray(int ** array);
int ** multiplyMatrix(int * A, int rowA, int colA, int * B, int rowB, int colB);
int main() {
     //declare pointer to resulting array
    int ** result;

    //initialize array
    MyMatrix A = {{1, 2}, {3, 4}};
    MyMatrix B = {{5, 6}, {7, 8}};

    //call function
    result = multiplyMatrix(A, 2, 2, B, 2, 2);
    displayArray(result);
}
int ** multiplyMatrix(int * A, int rowA, int colA, int * B, int rowB, int colB) {
    int **res, row, col, entry, sum, rowIsNull = 0;
    res = (int **)malloc(sizeof(int *) * rowA);
    
    if (colA == rowB && res != NULL) {
        for (row = 0; !rowIsNull && row < rowA; row++) {
            res[row] = (int *)malloc(sizeof(int) * colB);
            
            if(res[row] == NULL) {
                rowIsNull = 1;
            }
        }
        
        if (!rowIsNull) {
            for (row = 0; row < rowA; row++) {
                for (col = 0; col < colB; col++) {
                    sum = 0;
                    
                    for (entry = 0; entry < colA; entry++) {
                        sum += A[row*colA + entry] * B[entry*colB + col];
                    }
                    
                    res[row][col] = sum;
                }
            }
        }
    }
    
    return res;
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