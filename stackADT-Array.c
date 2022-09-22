#include <stdio.h>
#define max 5
typedef struct {
    char elem[max];
    int top;
} Stack;
void initStack(Stack * s);
int isFull(Stack s);
int isEmpty(Stack s);
void push(Stack * s, char elem);
void pop(Stack * s);
char top(Stack s);
int main() {
    Stack S;
    char retval;

    //initialize stack to be usable - set top to -1
    initStack(&S);

    //push - insert char elem at top
    push(&S, 'n');

    //pop - remove the elem at top
    pop(&S);

    //top - return the elem at top
    retval = top(S);
}
void initStack(Stack * s) {
    s->top = -1;
}
int isFull(Stack s) {
    return (s.top == max - 1) ? 1 : 0;
}
int isEmpty(Stack s) {
    return (s.top == -1) ? 1 : 0;
}
void push(Stack * s, char elem) {
    //check if array is full
    if (!isFull(*s)) {
        s->elem[++(s->top)] = elem;
    }
}
void pop(Stack * s) {
    //check if array is empty
    if (!isEmpty(*s)) {
        s->top--;
    }
}
char top(Stack s) {
    char val = '\0';

    return (!isEmpty(s)) ? s.elem[s.top] : val;
}