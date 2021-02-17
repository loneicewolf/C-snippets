#include <stdio.h>

  #define n printf("\n");
  #define t printf("\t");
  
  #define FOR2 for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);

int main() {

  //for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);
  //for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);
  FOR2

  return 0;
}
