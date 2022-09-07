#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} List;
void displayList(List T);
void insertEnd(List * A);
int main() {
    List L;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    insert(&L);
    displayList(L);
}
void insertEnd(List * A) {
    if (A->count + 1 < MAX) {
        A->Element[A->count++] = 'D';
    }

    A->Element[A->count] = '\0';
}
void displayList(List T) {
    int ctr;

    for (ctr = 0; ctr < T.count; ctr++) {
        printf("%c", T.Element[ctr]);
    }
}