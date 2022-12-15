//selection sort with linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node * link;
} nodetype, * NODE;
void selectionSort(NODE A);
void displaySorted(NODE temp);
int main () {
    NODE L;

    //allocating memory and assigning values
    L = (NODE)malloc(sizeof(nodetype));
    L->data = 2;
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 7;
    L->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->data = 4;
    L->link->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->link->data = 1;
    L->link->link->link->link = NULL;

    selectionSort(L);
    displaySorted(L);
}
void selectionSort(NODE A) {
    NODE start, min, trav;
    int temp;

    //start pointer traversing
    for (start = A; start->link != NULL; start = start->link) {
        min = start;
        //trav pointer
        for (trav = start->link; trav != NULL; trav = trav->link) {
            if (trav->data < min->data) {
                min = trav;
            }
        }

        temp = min->data;
        min->data = start->data;
        start->data = temp;
    }
}
void displaySorted(NODE temp) {
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
} 