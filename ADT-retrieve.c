#include <stdio.h>
#include <string.h>
#define MAX 5
typedef struct {
    char Element[MAX];
    int count;
}List;
char retrieve(List A, int pos);
int main() {
    List L;
    char val;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    val = retrieve(L, 2);
}
char retrieve(List A, int pos) {
    return pos < A.count ? A.Element[pos] : NULL;
}