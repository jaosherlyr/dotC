//create an adjacency matrix
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define INFINITY 2000

void matrix(int arr[][SIZE]) {
    arr[0][1] = 100;
    arr[0][2] = 30;
    arr[0][4] = 10;

    arr[2][1] = 60;
    arr[2][3] = 20;

    arr[3][0] = 20;
    arr[3][1] =10;

    arr[4][3] = 50;
}

int main() {
    int setArr[SIZE][SIZE];
    int x, y;

    for (x = 0; x < SIZE; x++) {
        for (y = 0; y < SIZE; y++) {
            setArr[x][y] = INFINITY;
        }
    }

    //pass to function and create adjacency matrix
    matrix(setArr);

    printf("\nAdjacency Matrix:\n");
    //print array
    for (x = 0; x < SIZE; x++) {
        for (y = 0; y < SIZE; y++) {
            printf("%d\t", (setArr[x][y] != INFINITY) ? setArr[x][y] : 0);
        }
        printf("\n");
    }

    printf("\nLabeled Adjacency Matrix:\n");
        //print array
        for (x = 0; x < SIZE; x++) {
            for (y = 0; y < SIZE; y++) {
                (setArr[x][y] != INFINITY) ? printf("%d\t",  setArr[x][y]) : printf("%c\t", '!');
            }
            printf("\n");
        }
}