#include <stdio.h>

#define SIZE 10
typedef struct {
    char data;
    int link;
} Nodetype;
typedef struct {
    Nodetype Nodes[SIZE];
    int avail;
} VirtualHeap;
typedef int List;
void initializeVH(VirtualHeap * heap);
int allocSpace(VirtualHeap * heap);
void deallocSpace(VirtualHeap * heap, List L);
int main() {
    VirtualHeap VH;
    List ndx;

    initializeVH(&VH);
    ndx = allocSpace(&VH); 
    deallocSpace(&VH, ndx);
}
void initializeVH(VirtualHeap * heap) {
    int ctr;

    for (ctr = 0; ctr < SIZE - 1; ctr++) {
        heap->Nodes[ctr].link = ctr + 1;
    }

    heap->Nodes[ctr].link = -1;
    heap->avail = 0;
}
int allocSpace(VirtualHeap * heap) {
    int temp = -1;

    if (heap->avail != -1) {
        temp = heap->avail;
        heap->avail = heap->Nodes[temp].link;
    }

    return temp;
}
void deallocSpace(VirtualHeap * heap, List L) {
    if (L < SIZE && L != -1) {
        heap->Nodes[L].link = heap->avail;
        heap->avail = L;
    }
}