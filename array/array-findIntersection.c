//create a function that will accept two sets and return an array containing the values of the two arrays that intersect
//each array will have -1 as its sentinel value
#include <stdio.h>
#include <stdlib.h>
int * findIntersection(int arrayA[], int arrayB[]);
int main() {
    int arrA[5] = {1, 3, 5, 2, -1};
    int arrB[6] = {1, 4, 6, 5, 3, -1};
    //declare pointer that will accept the array from the function
    int * arrC;

    arrC = findIntersection(arrA, arrB);

    //print array
    while (*arrC != -1) {
        printf("%d\n", *arrC);
        arrC++;
    }
}
int * findIntersection(int arrayA[], int arrayB[]) {
    int * arrayNew, ctrA, ctrB, ctrC = 0, size;

    //get size for new array
    for (ctrA = 0; arrayA[ctrA] != -1; ctrA++) {}
    for (ctrB = 0; arrayB[ctrB] != -1; ctrB++) {}
    size = ctrA < ctrB ? ctrA : ctrB;

    arrayNew = (int *)malloc(size * sizeof(int));

    for (ctrA = 0; arrayNew != NULL && arrayA[ctrA] != -1; ctrA++) {
        for (ctrB = 0; arrayB[ctrB] != -1; ctrB++) {
            if (arrayA[ctrA] == arrayB[ctrB]) {
                arrayNew[ctrC++] = arrayA[ctrA];
            }
        }
    }

    //reallocate memsize and init last element as -1

    arrayNew = (int *)realloc(arrayNew, (ctrC + 1) * sizeof(int));

    if (arrayNew != NULL) {
        arrayNew[ctrC] = -1;
    }

    return arrayNew;
}