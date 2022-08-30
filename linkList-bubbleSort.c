//bubble sort with linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node * link;
} nodetype, * NODE;
void bubbleSort(NODE A);
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

    bubbleSort(L);
    displaySorted(L);
}
void bubbleSort(NODE A) {
    NODE start, end;
    int temp;

    for (end = NULL; end != A->link; end = start) {
        for (start = A; start->link != end; start = start->link) {
            temp = start->data;

            if (temp > start->link->data) {
                start->data = start->link->data;
                start->link->data = temp;
            }
        }
    }
}
void displaySorted(NODE temp) {
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
} 