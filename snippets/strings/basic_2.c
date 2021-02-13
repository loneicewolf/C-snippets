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
     and their corresponding character trough dereferencing (*) iptr */
  for(int i='a'; i<'z';i++){
    iptr = &i; // iptr points to i
    printf("chr:%c ascii:%d at:%p\n",*iptr,*iptr,iptr); //dereference iptr 2 times, 
                                                        //(*iptr), lastly, print out the address  (iptr) with %p
  }
  
  /* (optional)
  prints out a list of ascii value  of A-Z */
  // for 'A' to 'Z''s ascii values:
   // for(int i='A'; i<'Z';i++){
   // iptr = &i; // iptr points to i
   // printf("chr:%c ascii:%d at:%p\n",*iptr,*iptr,iptr);
   // }
}



/*

## Compile and Testrun: 

        gcc -o Basic2 basic_2.c && ./Basic2

## Output

        chr:a ascii:97 at:0x7ffd50d07044
        chr:b ascii:98 at:0x7ffd50d07044
        chr:c ascii:99 at:0x7ffd50d07044
        chr:d ascii:100 at:0x7ffd50d07044
        chr:e ascii:101 at:0x7ffd50d07044
        chr:f ascii:102 at:0x7ffd50d07044
        chr:g ascii:103 at:0x7ffd50d07044
        chr:h ascii:104 at:0x7ffd50d07044
        chr:i ascii:105 at:0x7ffd50d07044
        chr:j ascii:106 at:0x7ffd50d07044
        chr:k ascii:107 at:0x7ffd50d07044
        chr:l ascii:108 at:0x7ffd50d07044
        chr:m ascii:109 at:0x7ffd50d07044
        chr:n ascii:110 at:0x7ffd50d07044
        chr:o ascii:111 at:0x7ffd50d07044
        chr:p ascii:112 at:0x7ffd50d07044
        chr:q ascii:113 at:0x7ffd50d07044
        chr:r ascii:114 at:0x7ffd50d07044
        chr:s ascii:115 at:0x7ffd50d07044
        chr:t ascii:116 at:0x7ffd50d07044
        chr:u ascii:117 at:0x7ffd50d07044
        chr:v ascii:118 at:0x7ffd50d07044
        chr:w ascii:119 at:0x7ffd50d07044
        chr:x ascii:120 at:0x7ffd50d07044
        chr:y ascii:121 at:0x7ffd50d07044

*/
