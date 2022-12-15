//create a program that will open a new txt file and write 5 names
#include <stdio.h>
#include <string.h>
typedef struct {
    char LN[16];
    char FN[24];
    char Mi;
} nameType;
int main() {
    long int prev;
    nameType name;

    FILE * fp = fopen("test.txt", "r+");
    
    if (fp != NULL) {
        while (!feof(fp)) { //determine if the end of the file is reached
            prev = ftell(fp); //determine the current position

            fread(&name, sizeof(nameType), 1, fp);

            if (strcmp(name.LN, "LIM") == 0) {
                strcpy(name.LN, "YU");
                fseek(fp, prev, SEEK_SET);

                fwrite(&name, 1, sizeof(nameType), fp);
                fseek(fp, prev + sizeof(nameType), SEEK_SET);
            }
        }
    }
    
    fclose(fp);
}