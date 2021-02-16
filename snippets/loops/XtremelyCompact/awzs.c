#include <stdio.h>
int main() {
  // for loop                                      //  outputs                |data type|
  // for(int i='a';i<='z';putchar(i),i++);          // a,b,c...x,y,z          |  char   |
  // for(int i='a';i<='z';printf("%c\n",i),i++);    // a,b,c...x,y,z          |  char   |
  // for(int i='A';i<='Z';putchar(i),i++);          // A,B,C...X,Y,Z          |  char   |
  for(int i='a';i<='z';printf("%d\n",i),i++);     // 97,98,99..120,121,122    |  ascii  |
  //for(int i='a';i<='z';printf("%x\n",i),i++);       // 61,62,63 ,78,79,7a   |  hex    |

 //// for(int i='a';i<'z';printf("%d\n",i),F(i < 5),i++);
// for(int i='a';i<='z'; printf("%c\n",i),i++);
  return 0;
}
