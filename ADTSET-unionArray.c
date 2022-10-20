//ADT SET using Array implementation
//assume sets are sorted
#include<stdio.h>
//set array sizes
#define sizeA 4 
#define sizeB 4

void UnionSet(int A[], int B[], int C[]);
void display(int C[]);
void initSet(int C[]);
int main() {
    int A[sizeA] = {2, 4, 1, 5};
    int B[sizeB] = {5, 1, 3, 6};
    int uniSet[sizeA + sizeB];
    int ctr;

    //printArrays
    printf("Given Arrays:\n");
    printf("\nSET A: ");
    for (ctr = 0; ctr < sizeA; ctr++) {
        printf("%d ", A[ctr]);
    }
    printf("\nSET B: ");
    for (ctr = 0; ctr < sizeB; ctr++) {
        printf("%d ", B[ctr]);
    }

    //init union set
    initSet(uniSet);

    //call union for set
    UnionSet(A, B, uniSet);
    //print UNION
    printf("\n\nUNION OF SET A and B: ");
    display(uniSet);
}
void initSet(int C[]) {
    int size = sizeA + sizeB, ctr;

    for (ctr = 0; ctr < size; ctr++) {
        C[ctr] = -1;
    }
}
void UnionSet(int A[], int B[], int C[]) {
    //SORTED VERSION
    /*int ctrA = 0, ctrB = 0, ctr = 0;
    int * temp;
    
    while (ctrA < sizeA && ctrB < sizeB) {
        if (A[ctrA] < B[ctrB]) {
            C[ctr] = A[ctrA];
            ctrA++;
        } else {
            if (A[ctrA] == B[ctrB]) {
                ctrA++;
            }

            C[ctr] = B[ctrB];
            ctrB++;
        }
        ctr++;
    }

    if (ctrA < sizeA) {
        while (ctrA < sizeA) {
            C[ctr] = A[ctrA];
            ctrA++;
            ctr++;
        }
    }

    if (ctrB < sizeB) {
        while (ctrB < sizeB) {
            C[ctr] = B[ctrB];
            ctrB++;
            ctr++;
        }
    }
    */

   //UNSORTED VERSION
   int ctr, trav, min;

    for (ctr = 0; ctr < sizeA; ctr++) {
        C[ctr] = A[ctr];
    }  

    for (ctr = 0; ctr < sizeB; ctr++) {
        for (trav = 0; C[trav] != -1 && B[ctr] != C[trav]; trav++) {}

        if (C[trav] == -1) {
            C[trav] = B[ctr];
        }
    }

}
void display(int C[]) {
    int ctr;

    for (ctr = 0; C[ctr] != -1; ctr++) {
        printf("%d ", C[ctr]);
    }
}