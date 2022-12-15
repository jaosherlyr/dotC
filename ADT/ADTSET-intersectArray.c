#include <stdio.h>
#include <stdlib.h>
#define sizeA 5
#define sizeB 6
char * getIntersect(char A[], char B[]);
void initSet(char * set, int size);
void display(char * trav);
int main() {
    int ctr;
    char * interSet;

    char A[sizeA] = "abcef";
    char B[sizeB] = "bcdefg";

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

    interSet = getIntersect(A, B);

    //display set
    display(&(*interSet));
}
char * getIntersect(char A[], char B[]) {
    char * C;
    int ctrA, ctrB, ctrC = 0;
    int size = (sizeA < sizeB) ? sizeA : sizeB;

    C = (char *)malloc((sizeof(char)) * size);

    //initialize set
    initSet(&(*C), size);

    for (ctrA = 0; ctrA < sizeA; ctrA++) {
        for (ctrB = 0; ctrB < sizeB && A[ctrA] != B[ctrB]; ctrB++) {}

        if (ctrB != sizeB) {
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

    printf("\n\nThe Intersection of SET A and SET B: ");
    for (ctr = 0; ctr < size; ctr++) {
        printf("%c ", *(set +ctr));
    }
}