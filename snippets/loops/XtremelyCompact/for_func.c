 // file:for_func.c
 
 // William Martens
 // date: 16Feb 2021
 // the most compact for executing loop I have ever seen.
 
#include <stdio.h>
#define x 1
void F();

int main() {
  for(int i=0;i<=x;i++,F());
  return 0;
}

void F(){
  printf("executed F!\n");
}


// test run:

/*
 gcc -o for_func.elf for_func.c && ./for_func.elf
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!
executed F!

*/
