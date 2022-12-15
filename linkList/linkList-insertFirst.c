//insert an element at the first position of the linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void displayList(NODE temp);
void insertFirst(NODE * A, char elem);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'A';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'N';
    L->link->link = NULL;

    insertFirst(&L, 'C');
    displayList(L);
}
void insertFirst(NODE * A, char elem) {
    NODE temp;

    temp = (NODE)malloc(sizeof(nodetype));
    
    if(temp != NULL) {
        temp->data = elem;
        temp->link = *A;
        *A = temp;
    }
}
void displayList(NODE temp) {
    while (temp != NULL) {
        printf("%c", temp->data);
        temp = temp->link;
    }
}