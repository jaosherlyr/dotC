#include <stdio.h>
#define size 15

typedef struct {
    int Elem[size];
    int last;
} Heap;

void display(Heap H) {
    int ctr;

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

void heapsort(Heap * h) {
    int ctr, oldLast = (*h).last;

    for (ctr = oldLast; ctr > 0; ctr--) {
        (*h).Elem[ctr] = Deletemin(h);
    }

    (*h).last = oldLast;
}

int main() {
    Heap H;
    int ctr, arr[11] = {3, 4, 9, 6, 5, 9, 10, 10, 18, 7, 2};

    //initialize
    H.last = -1;

    for (ctr = 0; ctr < 11; ctr++) {
        insertHeap(&H, arr[ctr]);
    }

    printf("\nUnsorted Heap: ");
    display(H);

    heapsort(&H);

    printf("\nSorted Heap: ");
    display(H);
}