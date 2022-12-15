#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct node {
    char data[MAX];
    int ctr;
} * arrayList;
void initList(arrayList * A);
int main() {
    arrayList L;

    L = (arrayList)malloc(sizeof(struct node));

    initList(&L);
}
void initList(arrayList * A) {
    A->ctr = 0;
}