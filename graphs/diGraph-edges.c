//determine the number of edges of a completed graph
#include <stdio.h>

int edges(int val) {
    int sum = 0, temp;

    for (temp = val - 1; temp >= 1; temp--) {
        sum += temp;
    }

    return sum;
}

int main() {
    int num;

    printf("\nEnter number of vertices: ");
    scanf("%d", &num);

    printf("\nMy formula: \n");
    printf("A complete graph with %d number of edges has %d vertices\n", num, edges(num));
    printf("\nInternet formula: %d vertices\n\n", (((num - 1) * num) / 2));
}