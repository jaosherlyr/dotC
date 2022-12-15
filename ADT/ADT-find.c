//find the element in the list
#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} LIST;
int find(LIST A, char elem);
int main() {
    LIST L;
    char elem = 'P';

    strcpy(L.Element, "Pant");
    L.count = strlen(L.Element);

    printf("%s", (find(L, elem) == 1) ? "True" : "False");
}
int find(LIST A, char elem) {
    int ctr;

    for (ctr = 0; ctr <= A.count && A.Element[ctr] != elem; ctr++) {}

    return (ctr < A.count) ? 1 : 0;
}