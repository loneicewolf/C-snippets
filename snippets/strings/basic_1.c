/* strings.c                                */
/* prints out a list of ascii value  of a-z */
/* and their corresponding character        */
/* optionally prints out the ascii of A-Z   */

#include <stdio.h>

void ascii();
int main() {

  ascii();
  return 0;
}

void ascii() {
  
  /* prints out a list of ascii value  of a-z
   and their corresponding character        */
  for(int i='a'; i<'z';i++){
    printf("%c %d\n",i,i);
  }
  
  /* (optional)
  prints out a list of ascii value  of A-Z */
  // for 'A' to 'Z''s ascii values:
  //  for(int i='A'; i<'Z';i++){
  //   printf("%c %d\n",i,i);
  // }
}


/*
## Compile:
        gcc -o Str strings.c && ./Str 

## Test run:

        a 97
        b 98
        c 99
        d 100
        e 101
        f 102
        g 103
        h 104
        i 105
        j 106
        k 107
        l 108
        m 109
        n 110
        o 111
        p 112
        q 113
        r 114
        s 115
        t 116
        u 117
        v 118
        w 119
        x 120
        y 121

*/
