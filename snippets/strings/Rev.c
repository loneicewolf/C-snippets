
#include <stdio.h>
#define NL printf("\n");

int main() {
  char m2[] = {"helloworld"};
  for (int i=0; i<=sizeof(m2); i++){
   printf("%c",m2[sizeof(m2)-i]);
}
return 0;
}

// Reverse string
// helloworld -> dlrowolleh
