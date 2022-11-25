    #include <stdio.h>
    #include <stdlib.h>

    //definition of node
    typedef struct node {
        int elem;
        struct node * LC, * RC;
    }nodetype, * BST;

//Functions
void initTree(BST * T) {
    *T = NULL;
}
void insertTree(BST * T, int n) {
    if (*T != NULL) {
        if ((*T)->elem == n) {
            printf("Element is already in the tree!\n");
        } else {
            insertTree((((*T)->elem < n) ? &(*T)->RC : &(*T)->LC), n);
        }
    } else {
        *T = (BST)malloc(sizeof(nodetype));
        (*T)->LC = (*T)->RC = NULL;
        (*T)->elem = n;
    }
}
int isMember(BST T, int n) {
  int val = 0;

  if (T != NULL)
    val = (T->elem == n) ? 1 : ((T->elem > n) ? isMember(T->LC, n) : isMember(T->RC, n));

  return val;
}
int Deletemin(BST * T) {
  BST tempTrav;
  int temp = -1;

  if (*T != NULL) {
    if ((*T)->LC != NULL) {
        temp = Deletemin(&(*T)->LC);
    } else {
        temp = (*T)->elem;
        tempTrav = *T;
        *T = tempTrav->RC;
        free(tempTrav);
    }
  }

  return temp;
}
void Delete(BST * T, int n) {
	BST * trav, temp;

	for (trav = T; *trav != NULL && (*trav)->elem != n; trav = ((*trav)->elem < n) ? &(*trav)->RC : &(*trav)->LC) {}

	if (*trav != NULL) {
		if ((*trav)->LC != NULL && (*trav)->RC != NULL) {
			(*trav)->elem = Deletemin(&(*trav)->RC);
		} else {
			temp = *trav;
			*trav = ((*trav)->LC == NULL) ? temp->RC : temp->LC;
			free(temp);
		}
	}
}
void preorder(BST T) {
	if (T == NULL) return;

	printf("%d ", T->elem);
	preorder(T->LC);
	preorder(T->RC);
}
void postorder(BST T) {
    if (T == NULL) return;

    postorder(T->LC);
    postorder(T->RC);
    printf("%d ", T->elem);
}
void inorder(BST T) {
	if (T == NULL) return;

	inorder(T->LC);
	printf("%d ", T->elem);
	inorder(T->RC);
}

//main
int main() {
    BST tree;
    int size, ctr, val, retVal;

    //initialize tree
    initTree(&tree);

    //insert
    printf("How many values will you add to the tree? ");
    scanf("%d", &size);
    for (ctr = 0; ctr < size; ctr++) {
        printf("Enter value: ");
        scanf("%d", &val);
        insertTree(&tree, val);
    }

    //check if member
    printf("\nCheck if element is in tree: ");
    scanf("%d", &val);
    retVal = isMember(tree, val);
    printf("\nElement %d %s a member of the tree!\n", val, (retVal == 1) ? "is" : "is NOT");

    //delete
    printf("\nEnter an element to delete: ");
    scanf("%d", &val);
    Delete(&tree, val);

    //display
    printf("\nInorder Display: ");
    inorder(tree);
    printf("\nPreorder Display: ");
    preorder(tree);
    printf("\nPostorder Display: ");
    postorder(tree);

    printf("\n\nTree %s empty.\n", (tree == NULL) ? "is" : "is no longer");

}