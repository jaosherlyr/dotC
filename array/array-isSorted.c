//create a function that will determine if an array of characters are sorted (ascending)
//will return -1 if sorted otherwise will return the index of the 1st element not sorted
#include <stdio.h>
int isSorted(char array[], int size);
int main() {
    char array[5] = {'a', 'b', 'c', 'd', 'z'};
    int temp;

    temp = isSorted(array, 5);

    if (temp != -1) {
        printf("The element at index %d is greater than the next!\n", temp);
    } else {
        printf("The array is sorted!\n");
    }
}
int isSorted(char array[], int size) {
    int ctr, temp = 0;

    for (ctr = 0; ctr < size - 1; ctr++) {
        if (array[ctr] > array[ctr + 1]) {
            temp = ctr;
            break;
        }
    }

    return (temp != 0) ? temp : -1;
}
