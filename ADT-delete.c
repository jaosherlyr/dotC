//delete an element in an ADT list
#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} LIST;
void delete(LIST * A, int pos);
void displayList(LIST T);
int main() {
    LIST L;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    delete(&L, 0);
    displayList(L);
}
void delete(LIST * A, int pos) {
    int ctr;

    for (ctr = pos; ctr <= A->count; ctr++) {
        A->Element[ctr] = A->Element[ctr + 1];
    }

    A->count--;
}
//check if deletion is successfull
void displayList(LIST T) {
    int ctr;

    for (ctr = 0; ctr < T.count; ctr++) {
        printf("%c\n", T.Element[ctr]);
    }
}