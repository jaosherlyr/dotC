#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} List;
void displayList(List T);
void insert(List * A, int pos);
int main() {
    List L;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    insert(&L, 1);
    displayList(L);
}
void insert(List * A, int pos) {
    int ctr;

    if (A->count + 1 != MAX && pos <= A->count) {
        for (ctr = A->count; ctr >= pos; ctr--) {
            A->Element[ctr + 1] = A->Element[ctr];
        }

        A->Element[pos] = 'l';
        A->count++;
    } else {
        printf("Not Valid\n");
    }
}
void displayList(List T) {
    int ctr;

    for (ctr = 0; ctr < T.count; ctr++) {
        printf("%c", T.Element[ctr]);
    }
}