//linkList implementation of Queue

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char elem;
    struct node * next;
} * qNode;

typedef struct {
    qNode Front;
    qNode Rear;
} Queue;

void initQueue(Queue * que);
int isEmpty(Queue que);
void enqueue(Queue * que, char val);
void dequeue(Queue * que);
char front(Queue que);
int main() {
    Queue Q;
    char frontElem;

    initQueue(&Q);
    enqueue(&Q, 'a');
    enqueue(&Q, 'b');
    enqueue(&Q, 'c');
    dequeue(&Q);

    frontElem = front(Q);

}
void initQueue(Queue * que) {
    //initialize the list to be usable by setting both Front and Rear to NULL

    que->Front = que->Rear = NULL;
}
int isEmpty(Queue que) {
    return (que.Front == NULL);
}
void enqueue(Queue * que, char val) {
    //insert a value in REAR
    qNode temp;

    temp = (qNode)malloc(sizeof(struct node));

    if (temp != NULL) {
        temp->elem = val;
        temp->next = NULL;

        //if Rear is NULL then the list is still empty so FRONT should point at temp
        if (que->Rear == NULL) {
            que->Front = que->Rear = temp;
        } else {
            //if Rear is already pointing to a node then adding a new Node will make REAR point to the next one
            que->Rear = que->Rear->next = temp;
        }
    }
}
void dequeue(Queue * que) {
    qNode temp;
    //will delete the node Front is pointing to if list is NOT empty
    if (!isEmpty(*que)) {
        temp = que->Front;
        que->Front = que->Front->next;
        free(temp);
    }
}
char front(Queue que) {
    if (!isEmpty(que)) {
        return que.Front->elem;
    }
}