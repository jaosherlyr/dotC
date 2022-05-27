//for fiddling with short codes
#include <stdio.h>
#include <string.h>
int main() {
<<<<<<< HEAD
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
=======
    char arr[] = "test";

    printf("%s", strrev(arr));
}
>>>>>>> 6d5effd2d2b73b67c2cb2ba55c6afe6313e83f70
