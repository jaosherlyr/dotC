//create a union function for bitwise
#include <stdio.h>
#include <stdlib.h>
#define size 10
typedef int SET[size];

SET * Union(SET A, SET B);
int main() {
    SET A = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1};
    SET B = {0, 1, 0, 0, 1, 0, 0, 0, 1, 0};
    SET * C;

    C = Union(A, B);

    //display
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        printf("%d ", (*C)[ctr]);
    }
}
SET * Union(SET A, SET B) {
	SET * C;
	int ctr;
	
	C = (SET *)malloc(sizeof(SET));
	
	for (ctr = 0; ctr < size; ctr++) {
		(*C)[ctr] = (A[ctr] == 1 || B[ctr] == 1);
        //will return 1 if true and 0 if false
	}
	
	return C;
    //returns whatever *C is pointing to
}
