//create a code that will sort by ASC order each letter by word
#include <stdio.h>
#include <string.h>
int getWordLength(char str[], int size, int pos);
int main() {
  char string[10];
  char temp;
  int size, pos = 0, ndx, ndxOuter, ndxInner, wSize, loop;
  
  //accept word from input!
  printf("\nEnter a phrase to sort: ");
  scanf("%s", string);

  size = strlen(string);
  
  //check if word is acceptable!
  for (ndx = 0; ndx < size; ndx++) {
    if (string[ndx] >= 97 && string[ndx] <= 122) {
    } else {
      printf("string not acceptable!");
      return 0;  
    }
  }
  
  //while loop for the whole length of str
  while (pos < size) {
    
    //get word size
    wSize = getWordLength(string, size, pos);
  
    if (wSize > 1) {
      loop = 0;
      for (ndxOuter = pos; ndxOuter < wSize + pos; ndxOuter++) {
        loop++;
        for (ndxInner = pos; ndxInner < (wSize + pos) - loop; ndxInner++) {
              
          if (string[ndxInner] > string[ndxInner + 1] && string[ndxInner + 1] != 32 && string[ndxInner + 1] != '\0') {
            temp = string[ndxInner];
            string[ndxInner] = string[ndxInner + 1];
            string[ndxInner + 1] = temp;
          }
          
        }
        
      } 
      
    }
    pos = (pos + wSize) + 1;
  }
    
  printf("%s", string);

}
int getWordLength(char str[], int size, int pos) {
  int wSize = 0, ndx;

  for (ndx = pos; str[ndx] != 32 && ndx < size; ndx++) {
    wSize++;
  }
  return wSize;
}