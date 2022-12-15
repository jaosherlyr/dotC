#include <stdio.h>
#include <stdlib.h>
#define sizeA 5
#define sizeB 6
char * getDiff(char A[], char B[]);
void initSet(char * set, int size);
void display(char * trav);
int main() {
    int ctr;
    char * interSet;

    char A[sizeA] = "abcef";
    char B[sizeB] = "bzdefg";

    //print sets:
    printf("\nThe given sets are: ");
    printf("\nSET A: ");
    for (ctr = 0; ctr < sizeA; ctr++) {
        printf("%c ", A[ctr]);
    }
    printf("\nSET B: ");
    for (ctr = 0; ctr < sizeB; ctr++) {
        printf("%c ", B[ctr]);
    }

    interSet = (sizeA > sizeB) ? getDiff(A, B) : getDiff(B, A);

    //display set
    display(&(*interSet));
}
char * getDiff(char A[], char B[]) {
    char * C;
    int ctrA, ctrB, ctrC = 0, temp = 0, sizeOFBigger, sizeOfSmaller;
    int size = (sizeA < sizeB) ? sizeA : sizeB;
    
    sizeOFBigger = (sizeA > sizeB) ? sizeA : sizeB;
    sizeOfSmaller = (sizeA < sizeB) ? sizeA : sizeB;;

    C = (char *)malloc((sizeof(char)) * size);

    //initialize set
    initSet(&(*C), size);

    for (ctrA = 0; ctrA < sizeOFBigger; ctrA++) {
        for (ctrB = 0; ctrB < sizeOfSmaller && A[ctrA] != B[ctrB]; ctrB++) {}

        if (ctrB == sizeOfSmaller) {
            *(C + ctrC) = A[ctrA];
            ctrC++;
        }
    }

    return C;
}
void initSet(char * set, int size) {
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        *(set + ctr) = '\0';
    }
}
void display(char * set) {
    int ctr, size = (sizeA < sizeB) ? sizeA : sizeB;

    printf("\n\nThe Difference of SET A and SET B: ");
    for (ctr = 0; *(set + ctr) != '\0'; ctr++) {
        printf("%c ", *(set +ctr));
    }
}