#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} List;
void initialize(List * A);
int main() {
    List L;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    initialize(&L);
    displayList(L);
}
void initialize(List * A) {
    A->count = 0;
}