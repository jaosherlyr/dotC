//Given an adjacency list representation of a graph, create and return its equivalent adjacency matrix.
#include <stdio.h>
#include <stdlib.h>
#define INFINITY 2000
#define size 5

typedef struct node{
    int V;
    int label;
    struct node * link;
} arrayType, *array;

void insertNode(int vertex, int val, array ** temp) {
    array newNode;

    newNode = (array)malloc(sizeof(arrayType));
    newNode->V = vertex;
    newNode->label = val;
    **temp = newNode;
    *temp = &((**temp)->link);
}

void list(array * H) {
    array * trav;

    trav = &(H[0]);
    insertNode(1, 100, &trav);
    insertNode(2, 30, &trav);
    insertNode(4, 10, &trav);
    *trav = NULL;

    trav = &(H[2]);
    insertNode(1, 60, &trav);
    insertNode(3, 20, &trav);
    *trav = NULL;

    trav = &(H[3]);
    insertNode(0, 20, &trav);
    insertNode(1, 10, &trav);
    *trav = NULL;

    trav = &(H[4]);
    insertNode(3, 50, &trav);
    *trav = NULL;
}

void listToMatrix(array * list, int matrix[][size]) {
    array trav;
    int ctr;

    for (ctr = 0; ctr < size; ctr++) {
        for (trav = list[ctr]; trav != NULL; trav = (trav->link)) {
            matrix[ctr][trav->V] = trav->label;
        }
    }
}

int main() {
    array Head[5];
    int matrix[size][size];
    int ctr, ctr2;

    //init array to null
    for (ctr = 0; ctr < size; ctr++) {
        Head[ctr] = NULL;
    }

    //create adj list
    list(Head);

    //int matrix values
    for (ctr = 0; ctr < size; ctr++) {
        for (ctr2 = 0; ctr2 < size; ctr2++) {
            matrix[ctr][ctr2] = INFINITY;
        }
    }

    //convert list to matrix
    listToMatrix(Head, matrix);

    //print matrix
    printf("\nLabeled Adjacency Matrix:\n");
    for (ctr = 0; ctr < size; ctr++) {
        for (ctr2 = 0; ctr2 < size; ctr2++) {
            (matrix[ctr][ctr2] != INFINITY) ? printf("%d\t",  matrix[ctr][ctr2]) : printf("%c\t", '!');
        }
        printf("\n");
    }
}