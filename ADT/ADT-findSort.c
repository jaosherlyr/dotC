//find the element in a SORTED list
#include <stdio.h>
#include <string.h>
#define MAX 10
typedef struct {
    char Element[MAX];
    int count;
} LIST;
int findSort(LIST A, char elem);
int main() {
    LIST L;
    char elem = 'B';

    strcpy(L.Element, "ACD");
    L.count = strlen(L.Element);

    printf("%s\n", (findSort(L, elem) == 1) ? "True" : "False");
}
int findSort(LIST A, char elem) {
    int ctr, temp = 0;

    for (ctr = 0; ctr < A.count && A.Element[ctr] <= elem; ctr++) {
        if (A.Element[ctr] == elem) {
            temp = 1;
        }
    }

    //check if loop stops when element in list is greater than elem
    printf("%d\n", ctr);
    return temp;
}   