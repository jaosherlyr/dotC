#include <stdio.h>
#define size 15
#define arrsize 9

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

void heapify(Heap * h) {
    int parent, lowest, LC, RC, child, temp;

    for (lowest = ((*h).last - 1)/2; lowest >= 0; lowest--) {
        for (parent = lowest; ((parent * 2) + 1) <= (*h).last; parent = child) {
            LC = (parent * 2) + 1;
            RC = LC + 1;

            //child = (RC > (*h).last) ? LC : ((*h).Elem[LC] < (*h).Elem[RC]) ? LC : RC;

            if (RC > (*h).last) {
                child = LC;
            } else if ((*h).Elem[LC] == (*h).Elem[RC]) {
                child = RC;
            } else {
                child = ((*h).Elem[LC] < (*h).Elem[RC]) ? LC : RC;
            }

            if ((*h).Elem[parent] > (*h).Elem[child]) {
                temp = (*h).Elem[parent];
                (*h).Elem[parent] =(*h).Elem[child];
                (*h).Elem[child] = temp;
            }
        }
    }
}

int main() {
    int ctr, arr[arrsize] = {5, 1, 8, 2, 9, 1, 7, 2, 3};
    Heap H;

    H.last = -1;

    for (ctr = 0; ctr < arrsize; ctr++) {
        H.Elem[ctr] = arr[ctr];
        H.last++;
    }

    heapify(&H);

    printf("\nHeapified list: ");
    display(H);
}