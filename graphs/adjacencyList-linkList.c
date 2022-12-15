//create the adjacency list using LINK LIST
#include <stdio.h>
#include <stdlib.h>
#define size 5

typedef struct node{
    int val;
    struct node * link;
} arrayType, *array;

void insertNode(int num, array ** temp) {
    array newNode;

    newNode = (array)malloc(sizeof(arrayType));
    newNode->val = num;
    **temp = newNode;
    *temp = &((**temp)->link);
}

void list(array * H) {
    array * trav;

    trav = &(H[0]);
    insertNode(1, &trav);
    insertNode(2, &trav);
    insertNode(4, &trav);
    *trav = NULL;

    trav = &(H[2]);
    insertNode(1, &trav);
    insertNode(3, &trav);
    *trav = NULL;

    trav = &(H[3]);
    insertNode(0, &trav);
    insertNode(1, &trav);
    *trav = NULL;

    trav = &(H[4]);
    insertNode(1, &trav);
    *trav = NULL;
}

int main() {
    array Head[5], trav;
    int ctr;

    //init array to null
    for (ctr = 0; ctr < size; ctr++) {
        Head[ctr] = NULL;
    }

    list(Head);

    //print
    printf("\nAdjacency Link List Representation:\n");
    for (ctr = 0; ctr < size; ctr++) {
        printf("%d ", ctr);
        for (trav = Head[ctr]; trav != NULL; trav = trav->link) {
            printf("-> %d ", trav->val);
        }
        printf("\n");
    }
}