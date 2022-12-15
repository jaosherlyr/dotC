#include <stdio.h>
#include <string.h>
#define length 25
int main() {
  char sentence[length]; 
  char find[length];
  int size, fsize, ctr, fctr, val = 0;
  char *ptr, *fptr, temp;

  printf("Enter the sentence: ");
  fgets(sentence, length, stdin);
  printf("What word are you looking for? ");
  scanf("%s", find);
  
  size = strlen(sentence);
  fsize = strlen(find);
  ptr = sentence;
  temp = find[0];

    while (*ptr != '\0') {
        if (*ptr == temp) {
            fptr = find;
            fctr = 0;

            if (fsize != 1) {
                for (ctr = 0; ctr != fsize - 1; ctr++) {
                    fptr++;
                    fctr++;
                    ptr++;

                    if (*fptr == *ptr) {
                      if (fctr == fsize - 1) {
                        val++;
                      }
                    } else {
                        ptr--;
                    }
                }
            } else {
                val++;
            }
        }
        ptr++;
    }

  printf("\nThere are %d occurences.\n", val);
}