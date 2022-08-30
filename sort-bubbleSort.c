//Bubble sorting code
#include <stdio.h>
#define size 6
int main() {
    //initialize variables
    int ndxOuter, ndxInner, temp, x;
    int array[size] = {2, 6, 4, 1, 5, 3};

    //outer loop
    for (ndxOuter = 1; ndxOuter <= size; ndxOuter++) {
        //inner loop
        for (ndxInner = 0; ndxInner < (size - ndxOuter); ndxInner++) {
            //swap if element after is greater than the current element
            if (array[ndxInner] > array[ndxInner + 1]) {
                temp = array[ndxInner];
                array[ndxInner] = array[ndxInner + 1];
                array[ndxInner + 1] = temp;
            }
        }
    }

    //print array to check
    for (temp = 0; temp < size; temp++) {
        printf("%d ", array[temp]);
    }
}