//create a function that will sort array using SELCTION sort
#include <stdio.h>
int * selectionSort(int * array, int size);
int displayList(int array[], int size);
int main() {
    int array[10] = {7, 3, 2, 5, 8, 1, 4, 0, 9, 6};

    selectionSort(array, 10);
    displayList(array, 10);
}
int * selectionSort(int * array, int size) {
    int ctrOut, ctrIn, temp, min;

    for (ctrOut = 0; ctrOut < size - 1; ctrOut++) {
        min = ctrOut;

        for (ctrIn = ctrOut + 1; ctrIn < size; ctrIn++) {
            if (array[ctrIn] < array[min]) {
                min = ctrIn;
            }
        }

        temp = array[min];
        array[min] = array[ctrOut];
        array[ctrOut] = temp;
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