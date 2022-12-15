//create a program that will open a new txt file and write 5 names
#include <stdio.h>
typedef struct {
    char LN[16];
    char FN[24];
    char Mi;
} nameType;
int main() {
    nameType name[5];
    FILE * fp;
    int ctr;

    //open file
    fp = fopen("test.txt", "wb");

    if (fp != NULL) {
        for (ctr = 0; ctr < 5; ctr++) {
            printf("\nEnter First name:\n");
            scanf("%s", name[ctr].FN);
            printf("\nEnter Middle initiail:\n");
            scanf(" %c", &name[ctr].Mi);
            printf("\nEnter Last name:\n");
            scanf("%s", name[ctr].LN);
        }

        //write in file
        fwrite(name, sizeof(nameType), 5, fp);
    }

    fclose(fp);
}