//determine if num is prime
#include <stdio.h>
#include <math.h>

int isPrime(int val) {
    int limit, div, res = 1;

    limit = sqrt(val);

    for (div = 2; div <= limit && res != 0; div++) {
        res = val % div;
    }

    return (res == 0) ? 0 : 1;
}

int main() {
    int num;

    printf("\nEnter number: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("1 is a special number!\n");
    } else {
        printf("\nThe number %d %s a prime number.\n", num, (isPrime(num) == 1) ? "is" : "is NOT");
    }
}