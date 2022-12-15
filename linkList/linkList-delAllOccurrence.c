//delete all occurances in the linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void deleteAllOccur(NODE * A, char elem);
void displayList(NODE temp);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'A';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'N';
    L->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->data = 'N';
    L->link->link->link = NULL;

    deleteAllOccur(&L, 'N');
    displayList(L);
}
void deleteAllOccur(NODE * A, char elem) {
    NODE * trav, temp;

    for (trav = A; *trav != NULL;) {
        if ((*trav)->data == elem) {
            temp = *trav;
            *trav = (*trav)->link;
            free(temp);
        } else {
            trav = &(*trav)->link;
        }
    }
}
void displayList(NODE temp) {
    while (temp != NULL) {
        printf("%c", temp->data);
        temp = temp->link;
    }
}