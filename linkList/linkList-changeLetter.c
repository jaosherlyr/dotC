#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    char data;
    struct node * link;
} * linkList;
int changeLetter(linkList * A, char elemA, char elemB);
int main() {
    linkList L;
    int changes;

    L = (linkList)malloc(sizeof(struct node));
    L->data = 'M';
    L->link =(linkList)malloc(sizeof(struct node));
    L->link->data = 'i';
    L->link->link = (linkList)malloc(sizeof(struct node));
    L->link->link->data = 's';
    L->link->link->link = (linkList)malloc(sizeof(struct node));
    L->link->link->link->data = 's';
    L->link->link->link->link = (linkList)malloc(sizeof(struct node));
    L->link->link->link->link->data = 'u';
    L->link->link->link->link->link = (linkList)malloc(sizeof(struct node));
    L->link->link->link->link->link->data = 's';
    L->link->link->link->link->link->link = NULL;

    changes = changeLetter(&L, 's', 't');
}
int changeLetter(linkList * A, char elemA, char elemB) {
    linkList * trav;
    int ctr = 0;

    for (trav = A; *trav != NULL; trav = &(*trav)->link) {
        if ((*trav)->data == elemA) {
            (*trav)->data = elemB;
            ctr++;
        }
    }

    return ctr;
}