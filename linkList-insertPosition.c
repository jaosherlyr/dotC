//create a code that will allow you to insert a letter at a specific position in a linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void insertElement(NODE * A, int pos, char elem);
void displayList(NODE temp);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'H';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'O';
    L->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->data = 'P';
    L->link->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->link->data = 'E';
    L->link->link->link->link = NULL;

    insertElement(&L, 3, 'H');
    displayList(L);
}
void insertElement(NODE * A, int pos, char elem) {
    NODE * trav, temp;
    int ndx;

    trav = A;

    for (ndx = 1; *trav != NULL && ndx < pos - 1; ndx++) {
        trav = &(*trav)->link;
    }

    if (*trav != NULL) {
        temp = (NODE)malloc(sizeof(nodetype));
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