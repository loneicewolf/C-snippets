#include <stdio.h>
//one liner of loops.
int main() {
  // for(int i='a';i<'z';putchar(i),i++);       // a,b,c...
  // for(int i='a';i<'z';printf("%c\n",i),i++); // a,b,c...
  // for(int i='A';i<'Z';putchar(i),i++);       // A,B,C...
  for(int i='a';i<'z';printf("%d\n",i),i++);    // 97,98,99..
  return 0;
}
