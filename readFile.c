//create a program that will open a txt file and read the contents
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
    fp = fopen("test.txt", "rb");

    if (fp != NULL) {
        //read file
        fread(name, sizeof(nameType), 5, fp);

        for (ctr = 0; ctr < 5; ctr++) {
            printf("Name: %s, %s %c.\n", name[ctr].LN, name[ctr].FN, name[ctr].Mi);
        }
    }

    fclose(fp);
}