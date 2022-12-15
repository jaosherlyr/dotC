#include <stdio.h>
#define size 5

typedef struct {
    int Head[size];
    int adj[size * size];
    int last;
}arrayType, * array;

void create(array list) {
    list->Head[0] = 0;
    list->adj[++list->last] = 1;
    list->adj[++list->last] = 2;
    list->adj[++list->last] = 4;
    list->adj[++list->last] = -1;

    list->Head[1] = list->last + 1;
    list->adj[++list->last] = -1;

    list->Head[2] = list->last + 1;
    list->adj[++list->last] = 1;
    list->adj[++list->last] = 3;
    list->adj[++list->last] = -1;

    list->Head[3] = list->last + 1;
    list->adj[++list->last] = 0;
    list->adj[++list->last] = 1;
    list->adj[++list->last] = -1;

    list->Head[4] = list->last + 1;
    list->adj[++list->last] = 3;
    list->adj[++list->last] = -1;
}

int main() {
    arrayType adjList;
    int ctr, ctr2;

    //initialize last
    adjList.last = -1;

    //create array
    create(&adjList);

    //print array
    printf("Adjacency List cursor representation:\n");
    for (ctr = 0; ctr < size; ctr++) {
        printf("Head: %d\n", ctr);
        printf("Adj: ");
        for (ctr2 = adjList.Head[ctr]; adjList.adj[ctr2] != -1; ctr2++) {
            printf("%d ", adjList.adj[ctr2]);
        }
        printf("\n\n");
    }
}