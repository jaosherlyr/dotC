//insert an element at the end of a linkedlist
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void displayList(NODE temp);
void insertLast(NODE * A, char elem);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'H';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'O';
    L->link->link = NULL;

    insertLast(&L, 'T');
    displayList(L);
}
void insertLast(NODE * A, char elem) {
    NODE * trav, temp;

    for (trav = A; *trav != NULL; trav = &(*trav)->link) {}

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