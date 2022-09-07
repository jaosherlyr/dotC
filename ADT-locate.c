#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} List;
int locate(List A, char elem);
int main() {
    List L;
    int pos;

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    pos = locate(L, 't');

    if (pos != L.count) {
        printf("The element is in position: %d\n", pos);
    } else {
        printf("Not found\n");
    }
}
int locate(List A, char elem) {
    int ctr;

    for (ctr = 0; ctr < A.count && A.Element[ctr] != elem; ctr++) {}

    return ctr != A.count ? ctr : A.count;
}