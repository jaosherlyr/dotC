#include <stdio.h>
#define size 15

typedef struct {
    int Elem[size];
    int last;
} Heap;

void display(Heap H) {
    int ctr;

    printf("\nHeap: ");
        for (ctr = 0; ctr <= H.last; ctr++) {
        printf("%d ", H.Elem[ctr]);
    }
}

void insertHeap(Heap * h, int new) {
    int child, parent, temp;

    if ((*h).last < size + 2) {
        child = (*h).last + 1;
        (*h).Elem[child] = new;
        (*h).last++;

        for(; child != 0 && (*h).Elem[(child - 1)/2] > (*h).Elem[child]; child = parent) {
            parent = (child - 1)/2;
            temp = (*h).Elem[child];
            (*h).Elem[child] = (*h).Elem[parent];
            (*h).Elem[parent] = temp;
        }
    }
}

int Deletemin(Heap * h) {
    int min = -1, temp, LC, RC, child, parent;
    
    if ((*h).last != -1) {
        min = (*h).Elem[0];
        (*h).Elem[0] = (*h).Elem[(*h).last--];

        for (parent = 0; ((parent * 2) + 1) <= (*h).last; parent = child) {
            LC = (parent * 2) + 1;
            RC = LC + 1;

            if (RC > (*h).last) {
                child = LC;
            } else {
                child = ((*h).Elem[(parent * 2) + 1] < (*h).Elem[(parent * 2) + 2]) ? (parent * 2) + 1 : (parent * 2) + 2;
            }

            if ((*h).Elem[parent] > (*h).Elem[child]) {
                temp = (*h).Elem[parent];
                (*h).Elem[parent] = (*h).Elem[child];
                (*h).Elem[child] = temp;
                parent = child;
            }
        }
    }

    return min;
}

int main() {
    Heap H;
    int retVal;

    //initialize
    H.last = -1;

    H.Elem[0] = 3;
    H.Elem[1] = 4;
    H.Elem[2] = 9;
    H.Elem[3] = 6;
    H.Elem[4] = 5;
    H.Elem[5] = 9;
    H.Elem[6] = 10;
    H.Elem[7] = 10;
    H.Elem[8] = 18;
    H.Elem[9] = 7;
    H.last = 9;

    insertHeap(&H, 2);
    retVal = Deletemin(&H);
    display(H);
    printf("\nDeleted min elem = %d\n", retVal);
}