//simulating dijkstra's algo [matrix edition]
#include <stdio.h>
#include <stdlib.h>
#define size 5
#define INFINITY 2000
typedef struct {
    int D[size];
    int S[size];
} dijArrayType, * dijArray;

void createMatrix(int arr[][size]) {
    arr[0][1] = 100;
    arr[0][2] = 30;
    arr[0][4] = 10;

    arr[2][1] = 60;
    arr[2][3] = 20;

    arr[3][0] = 20;
    arr[3][1] =10;

    arr[4][3] = 50;
}

void dijkstra(dijArray ptr, int arr[][size], int V) {
    int ctr;

    //initialize S
    ptr->S[0] = V;

    //copy the column of V to D
    for (ctr = 0; ctr < size; ctr++) {
        ptr->D[ctr] = arr[V][ctr];
    }
}

int main() {
    int matrix[size][size];
    dijArrayType algo;
    int x, y;

    for (x = 0; x < size; x++) {
        for (y = 0; y < size; y++) {
            matrix[x][y] = INFINITY;
        }
    }

    //pass to function and create adjacency matrix
    createMatrix(matrix);

    //get single-source shortest path
    dijkstra(&algo, matrix, 0);

    printf("\nLabeled Adjacency Matrix:\n");
        //print array
        for (x = 0; x < size; x++) {
            for (y = 0; y < size; y++) {
                (matrix[x][y] != INFINITY) ? printf("%d\t",  matrix[x][y]) : printf("%c\t", '!');
            }
            printf("\n");
        }
}