//selection sorting code
#include <stdio.h>
#define size 6
int main() {
    int ndxOuter, ndxInner, min, temp, x;
    int array[size] = {2, 6, 4, 1, 5, 3};

    //outer loop
    for (ndxOuter = 0; ndxOuter < size - 1; ndxOuter++) {
        //set minimum
        min = ndxOuter;
        //inner loop
        for (ndxInner = ndxOuter + 1; ndxInner < size; ndxInner++) {
            //check if min is smaller than current element
            if (array[min] > array[ndxInner]) {
                min = ndxInner;
            }
        }
        //swap the smaller value to the proper position
        temp = array[ndxOuter];
        array[ndxOuter] = array[min];
        array[min] = temp;
    }

    //print array
    for (temp = 0; temp < size; temp++) {
        printf("%d ", array[temp]);
    }
}