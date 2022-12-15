#include <stdio.h>
#include <stdlib.h>
typedef struct term {
    int coe, expo;
    struct term * ptr;
} * polynomial;
int polyExpression(int x, int expo);
int main() {
    polynomial poly, trav;
    int x = 2, total = 0, temp;
    
    poly = (polynomial)malloc(sizeof(struct term));
    poly->coe = 3;
    poly->expo = 4;
    poly->ptr = (polynomial)malloc(sizeof(struct term));
    poly->ptr->coe = 2;
    poly->ptr->expo = 3;
    poly->ptr->ptr = (polynomial)malloc(sizeof(struct term));
    poly->ptr->ptr->coe = -7;
    poly->ptr->ptr->expo = 1;
    poly->ptr->ptr->ptr = (polynomial)malloc(sizeof(struct term));
    poly->ptr->ptr->ptr->coe = 5;
    poly->ptr->ptr->ptr->expo = 0;
    poly->ptr->ptr->ptr->ptr = NULL;
    
    for (trav = poly; trav != NULL; trav = trav->ptr) {
      temp = polyExpression(x, trav->expo);
      total += (trav->coe * temp);
    }
    
    printf("%d", total);
    
}
int polyExpression(int x, int expo) {
  if (expo != 0) {
    return x * polyExpression(x, expo - 1);
  } else {
    return 1;
  }
}