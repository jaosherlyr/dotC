/*function function will accept an array of integers and its size, and an integer N. 
The function will return 1 if the given integer N is found in the array, otherwise it will return 0.*/
#include <stdio.h>
//use int for function since it will return an integer
int findN(int array[], int size, int N);
int main() {
    //init array, size and N
    int array[5] = {1, 2, 3, 4, 5};
    int size = 5, N = 6;

    //call function and print
    printf("\nN %s in array\n", findN(array, size, N) == 1 ? "is" : "is NOT");
}
int findN(int array[], int size, int N) {
    int ctr;

    //will loop until ctr is greater than size or if N is found
    for (ctr = 0; ctr < size && array[ctr] != N; ctr++ ) {}

    return ctr < size ? 1 : 0;
}