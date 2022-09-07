#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
typedef struct node {
    char data[MAX];
    int ctr;
} * arrayList;
int changeLetter(char elemA, char ElemB);
int main() {
    arrayList L;
    int change;

    L = (arrayList)malloc(sizeof(struct node));

    strcpy(L->data, "Missus");
    L->ctr = strlen(L->data);

    change = changeLetter('s', 't');
}
int changeLetter(char elemA, char ElemB) {
    int count = 0, ndx;

    for (ndx = 0; ndx < (*A)->ctr; ndx++) {
        if ((*A)->data[ndx] == elemA) {
            (*A)->data[ndx] = elemB;
            count++;
        }
    }

    return count;
}