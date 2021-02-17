
//@Author: William Martens
//   Date: 2021- 17Feb, 02:11
//   Does: print abc , xyz, up down  but in rev. order.
     /*   a z   */
     /*   b y   */
     /*   ...   */
     /*   y	b   */
     /*   z	a   */
     
     //and, (commented) optionally prints ascii val.

#include <stdio.h>

  #define n printf("\n");
  #define t printf("\t");
  #define FOR2 for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);
  #define prntIJ printf("%d\t%d\n",i,j)
  #define prntIJ_Chars printf("%c\t%c\n",i,j)

int main() {
  

  for(int i='a',j='z';i<='z';prntIJ_Chars,j>='a',j--,i++);
  for(int i='a',j='z';i<='z';prntIJ,j>='a',j--,i++); // prints same but ascii value



  return 0;
}
