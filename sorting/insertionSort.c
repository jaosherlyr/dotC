//create a function that will sort an array using INSERTION sort
#include <stdio.h>
int * insertionSort(int * array, int size);
int displayList(int * array, int size);
int main() {
    int array[10] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};

    insertionSort(array, 10);
    displayList(array, 10);
}
int * insertionSort(int * array, int size) {
    int ctrOut, ctrIn, hole, temp;

    for (ctrOut = 1; ctrOut <= size - 1; ctrOut++) {
        hole = ctrOut;
        temp = array[ctrOut];

        for (ctrIn = ctrOut - 1; ctrIn >= 0; ctrIn--) {
            if (temp < array[ctrIn]) {
                array[ctrIn + 1] = array[ctrIn];
                hole = ctrIn;
            }
        }

        array[hole] = temp;
    }

    return array;
}
int displayList(int * array, int size) {
    int ctr;

    printf("\nArray: ");
    
    for (ctr = 0; ctr < size; ctr++) {
        printf("%d ", array[ctr]);
    }

    return 0;
}