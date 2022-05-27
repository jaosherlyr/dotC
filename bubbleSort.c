//create a function where it will sort the array using BUBBLE sort
#include <stdio.h>
int * bubbleSort(int * array, int size);
int displayList(int array[], int size);
int main() {
    int array[10] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};

    bubbleSort(array, 10);
    displayList(array, 10);
}
int * bubbleSort(int * array, int size) {
    int ctrOut, ctrIn, temp;

    for (ctrOut = 0; ctrOut < size - 1; ctrOut++) {
        for (ctrIn = 0; ctrIn < size - (ctrOut + 1); ctrIn++) {
            if (array[ctrIn] > array[ctrIn + 1]) {
                temp = array[ctrIn];
                array[ctrIn] = array[ctrIn + 1];
                array[ctrIn + 1] = temp;
            }
        }
    }

    return array;
}
int displayList(int array[], int size) {
    int ctr;

    printf("\nArray: ");

    for (ctr = 0; ctr < size; ctr++) {
        printf("%d ", array[ctr]);
    }

    printf("\n");

    return 0;
}