#include <stdio.h>
#define NL printf("\n");


int main() {
  char m1[] = {"hello"};
  char *cptr=m1;
  for (int i =0; i<sizeof(m1); ++i){
    printf("%c ",*cptr);
    (*cptr++);
  } // h e l l o 
  
return 0;
}
// gcc -Wall -o Test test.c 
