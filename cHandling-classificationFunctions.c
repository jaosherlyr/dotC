//create a program using all character classification functions
#include <stdio.h>
#include <ctype.h>
int main() {
    int ctr;

    //print alphabet characters
    printf("\nAll characters of the alphabet:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (isalpha(ctr) != 0)
            printf("%c ", ctr);
    }

    //print digit characters
    printf("\n\nAll numbers:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (isdigit(ctr) != 0)
            printf("%c ", ctr);
    }

    //print punctuation characters
    printf("\n\nAll punctuation characters:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (ispunct(ctr) != 0)
            printf("%c ", ctr);
    }

    //print whitespace characters
    printf("\n\nAll whitespace characters:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (isspace(ctr) != 0)
            printf("'%c '", ctr);
    }

    //print uppercase characters
    printf("\n\nAll uppercase letters:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (isupper(ctr) != 0)
            printf("%c ", ctr);
    }

    //print uppercase characters
    printf("\n\nAll lowercase letters:\n");
    for (ctr = 0; ctr < 255; ctr++) {
        if (islower(ctr) != 0)
            printf("%c ", ctr);
    }
    
}