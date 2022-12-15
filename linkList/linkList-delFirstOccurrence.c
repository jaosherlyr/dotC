//delete the first occurance in a linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
}nodetype, * NODE;
void deleteFirstOccur(NODE * A, char elem);
void displayList(NODE temp);
int main () {
    NODE L;

    L = (NODE)malloc(sizeof(nodetype));
    L->data = 'A';
    L->link = (NODE)malloc(sizeof(nodetype));
    L->link->data = 'T';
    L->link->link = (NODE)malloc(sizeof(nodetype));
    L->link->link->data = 'S';
    L->link->link->link = NULL;

    deleteFirstOccur(&L, 'N');
    displayList(L);
}
void deleteFirstOccur(NODE * A, char elem) {
    NODE * trav, temp;

    for (trav = A; *trav != NULL && (*trav)->data != elem; trav = &(*trav)->link) {}

    if (*trav != NULL) {
        temp = *trav;
        *trav = (*trav)->link;
        free(temp);
    }
}
void displayList(NODE temp) {
    while (temp != NULL) {
        printf("%c", temp->data);
        temp = temp->link;
    }
}

void deteleElem(List * L, char elem, VirtualHeap * VH) {
    List * trav, temp;

    for (trav = L; *trav != NULL && VH->Nodes[*trav].data != elem; *trav = VH->Nodes[*trav].link) {
        if (*trav != -1) {
            temp = *trav;
            *trav = VH->Nodes[temp].link;
            deallocSpace(temp, VH);  
        }
    }
}