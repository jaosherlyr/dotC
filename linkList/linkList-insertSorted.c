//assuming that the given linked list is sorted
//insert a given element at its proper position
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void insertSorted(NODE * A, char elem);
void displayList(NODE temp);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'A';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'C';
    L->link->link = NULL;

    insertSorted(&L, 'B');
    displayList(L);
}
void insertSorted(NODE * A, char elem) {
    NODE * trav, temp;

    for (trav = A; *trav != NULL && (*trav)->data < elem; trav = &(*trav)->link) {}

    temp = (NODE)malloc(sizeof(nodetype));

    if (temp != NULL) {
        temp->data = elem;
        temp->link = *trav;
        *trav = temp;
    }
}
void displayList(NODE temp) {
    while (temp != NULL) {
        printf("%c", temp->data);
        temp = temp->link;
    }
}