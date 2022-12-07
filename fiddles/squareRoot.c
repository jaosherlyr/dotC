//get the square root of a number without using the sqrt function
//using repeated subtraction method
//not recommended for big numbers or not perfect squares

#include <stdio.h>
#include <math.h>

int main() {
    int ctr = 0, div = 1, num, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    for (temp = num; temp >= div && temp > 0; ctr++) {
        temp -= div;
        div += 2;
    }

    printf("\n%d %s a perfect square!\n", num, (temp == 0) ? "is" : "is NOT");
    printf("The square root of %d is %d\n", num, ctr);
    printf("\nTo check! Sqrt result: %.0f\n\n", sqrt(num));
}