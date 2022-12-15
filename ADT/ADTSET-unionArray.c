//given two SORTED sets of array, print out the sorted union of both
#include <stdio.h>
#include <stdlib.h>
int * getElements(int size);
void display(int * arr, int size);
int * getUnion(int * arrayA, int * arrayB, int sizeA, int sizeB, int sizeC);
int main() {
    int sizeOfA, sizeOfB, sizeOfUnion, * arrA, * arrB, *arrUnion;

    printf("\nWhat is the size of you first array? ");
    scanf("%d", &sizeOfA);

    printf("\nWhat is the size of you second array? ");
    scanf("%d", &sizeOfB);

    sizeOfUnion = sizeOfA + sizeOfB;

    //getArray
    printf("\nEnter elements of Set A: \n");
    arrA = getElements(sizeOfA);
    printf("\nEnter elements of Set B: \n");
    arrB = getElements(sizeOfB);

    //get union of array
    arrUnion = getUnion(arrA, arrB, sizeOfA, sizeOfB, sizeOfUnion);

    //print arrays
    printf("\nSet A: ");
    display(arrA, sizeOfA);
    printf("\nSet B: ");
    display(arrB, sizeOfB);
    printf("\n\nUnion of Set A and B: ");
    display(arrUnion, sizeOfUnion);
}
int * getElements(int size) {
    int * temp, ctr;

    //allocate memory to the array
    temp = (int *)malloc(sizeof(int) * size);

    //get elements
    for (ctr = 0; ctr < size; ctr++) {
        scanf("%d", (temp + ctr));
    }

    return temp;
}
void display(int * arr, int size) {
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        printf("%d ", *(arr + ctr));
    }
}
int * getUnion(int * arrayA, int * arrayB, int sizeA, int sizeB, int sizeC) {
    int * temp, ctrA, ctrB, ctrC = 0;

    temp = (int *)malloc(sizeof(int) * sizeC);

    for (ctrA = ctrB = 0; ctrA < sizeA && ctrB < sizeB;) {
        if (*(arrayA + ctrA) < *(arrayB + ctrB)) {
            *(temp + ctrC) = *(arrayA + ctrA);
            ctrA++;
            ctrC++;
        } else {
            *(temp + ctrC) = *(arrayB + ctrB);
            ctrB++;
            ctrC++;
            if (*(arrayA + ctrA) == *(arrayB + ctrB)) {
                ctrA++;
            }
        }
    }

    if (ctrA < sizeA) {
        while (ctrA < sizeA) {
            *(temp + ctrC) = *(arrayA + ctrA);
            ctrA++;
            ctrC++;
       }
    } else if (ctrB != sizeB) {
         while (ctrB < sizeB) {
            *(temp + ctrC) = *(arrayB + ctrB);
            ctrB++;
            ctrC++;
       }
    }

    return temp;
}