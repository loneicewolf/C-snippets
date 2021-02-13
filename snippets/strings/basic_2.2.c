/* basic_3.c                                */
/* Using pointers,                          */
/* prints out a list of ascii value  of a-z */
/* and their corresponding character        */
/* optionally prints out the ascii of A-Z   */
/* and, modifies the output to make cipher
                                    -texts */

/* More compact version */
// Skipped comments this time.
// As well as the function.
// And, this works for me (but maybe not for some?)
// if this can be improved - Please create a issue!
#include <stdio.h>

int main() {
  int *iptr;
  
  for(int i='a';iptr=&i,
          i<'z';i++  ){
          printf("chr:%c ascii:%d\n",*iptr,*iptr);
          }
          
  return 0;
}

/*
      chr:a ascii:97
      chr:b ascii:98
      chr:c ascii:99
      ...
      chr:x ascii:120
      chr:y ascii:121
*/
