//for fiddling with short codes
#include <stdio.h>
int main() {
    int size, ctr, temp;

    //get size
    printf("Enter the size: ");
    scanf("%d", &size);

    //declare array
    int array[size];

    //get elements
    printf("Enter the elements: ");
    
    for (ctr = 0; ctr < size; ctr++) {
        scanf("%d", &array[ctr]);
    }

    printf("Gaps = ");

    //determine gaps
    for (ctr = 0; ctr < size - 1; ctr++) {
        for (temp = array[ctr] + 1; temp != array[ctr + 1]; temp++) {
            printf("%d ", temp);
        }
    }
} 