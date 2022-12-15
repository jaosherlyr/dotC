#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 4
//definition of complete name
typedef struct {
    char FName[24], MI, LName[16];
}nameType;
//definition of person info
typedef struct {
    nameType name;
    char gender;
}personType;
//defintion of ADT list
typedef struct {
    personType people[SIZE];
    int count;
}ArrayList;
//defintion of Linked list
typedef struct node {
    personType person;
    struct node * next;
}* LinkList;
ArrayList getFemale(LinkList * link);
int main() {
    LinkList L;
    ArrayList A;

    L = (LinkList)malloc(sizeof(struct node));
    strcpy(L->person.name.FName, "AAAA");
    L->person.name.MI = 'A';
    strcpy(L->person.name.LName, "AAA");
    L->person.gender = 'F';

    L->next = (LinkList)malloc(sizeof(struct node));
    strcpy(L->next->person.name.FName, "BBBB");
    L->next->person.name.MI = 'B';
    strcpy(L->next->person.name.LName, "BBB");
    L->next->person.gender = 'M';

    L->next->next = (LinkList)malloc(sizeof(struct node));
    strcpy(L->next->next->person.name.FName, "CCCC");
    L->next->next->person.name.MI = 'C';
    strcpy(L->next->next->person.name.LName, "CCC");
    L->next->next->person.gender = 'F';

    L->next->next->next = NULL;

    A = getFemale(&L);
}
ArrayList getFemale(LinkList * link) {
    ArrayList arr;
    LinkList * trav, temp;

    arr.count = 0;

    for (trav = link; *trav != NULL;) {
        if ((*trav)->person.gender == 'F') {
            arr.people[arr.count++] = (*trav)->person;
            temp = *trav;
            *trav = temp->next;
            free(temp);
        } else {
            trav = &(*trav)->next;
        }
    }

    return arr;
}