/* basic_2.c                                */
/* Using pointers,                          */
/* prints out a list of ascii value  of a-z */
/* and their corresponding character        */
/* optionally prints out the ascii of A-Z   */

#include <stdio.h>

void ptr_ascii();

int main() {
  ptr_ascii();
  return 0;
}

void ptr_ascii(){
  int *iptr; // iptr is a pointer, of type int (points to int)
  
  /* prints out a list of ascii value  of a-z
     and their corresponding character using trough dereferencing (*) iptr */
  for(int i='a'; i<'z';i++){
    iptr = &i; // iptr points to i
    printf("chr:%c ascii:%d\n",*iptr,*iptr); //dereference iptr 2 times, (*iptr)
    
    //printf("chr:%c ascii:%d at:%p\n",*iptr,*iptr,iptr);  //if needed,  print out the address  (iptr)
  }
  
  /* (optional)
  prints out a list of ascii value  of A-Z */
  // for 'A' to 'Z''s ascii values:
   // for(int i='A'; i<'Z';i++){
   // iptr = &i; // iptr points to i
   //printf("chr:%c ascii:%d\n",*iptr,*iptr);
    /*printf("chr:%c ascii:%d at:%p\n",*iptr,*iptr,iptr);*/
   // }
}



/*
## Compile and Testrun: 

        gcc -o Basic2 basic_2.c && ./Basic2

## Output

        chr:a ascii:97
        chr:b ascii:98
        chr:c ascii:99
        chr:d ascii:100
        chr:e ascii:101
        chr:f ascii:102
        chr:g ascii:103
        chr:h ascii:104
        chr:i ascii:105
        chr:j ascii:106
        chr:k ascii:107
        chr:l ascii:108
        chr:m ascii:109
        chr:n ascii:110
        chr:o ascii:111
        chr:p ascii:112
        chr:q ascii:113
        chr:r ascii:114
        chr:s ascii:115
        chr:t ascii:116
        chr:u ascii:117
        chr:v ascii:118
        chr:w ascii:119
        chr:x ascii:120
        chr:y ascii:121

*/
