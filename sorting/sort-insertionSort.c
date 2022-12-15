//insertion sorting code
#include <stdio.h>
#define size 6
int main() {
    int ndxOuter, ndxInner, hole, temp, x;
    int array[size] = {2, 6, 4, 1, 5, 3};

    //outer loop
    for (ndxOuter = 1; ndxOuter < size; ndxOuter++) {
        //set hole and temp values
        hole = ndxOuter;
        temp = array[ndxOuter];
        //inner loop
        for (ndxInner = ndxOuter - 1; ndxInner >= 0; ndxInner--) {
            //check if hole value is less then ndxInner value
            if (temp < array[ndxInner]) {
                array[ndxInner + 1] = array[ndxInner];
                hole = ndxInner;
            }
        }
        //insert temp value to new hole
        array[hole] = temp;
    }

    //print array
    for (temp = 0; temp < size; temp++) {
        printf("%d ", array[temp]);
    }
}