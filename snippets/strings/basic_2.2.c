
#include <stdio.h>
void Basic_3();
int main() {
  Basic_3();
  return 0;
}

void Basic_3(){
  int *iptr;
  int ctr=0;
  for(int i='a';iptr=&i,
          i<='z';i++  ){
          printf("%d. %c %d\n",ctr,*iptr,*iptr);
          ctr++;
          }}
/*
  
  Output
  
  0. a 97
  1. b 98
  2. c 99
  3. d 100
  4. e 101
  5. f 102
  6. g 103
  7. h 104
  8. i 105
  9. j 106
  10. k 107
  11. l 108
  12. m 109
  13. n 110
  14. o 111
  15. p 112
  16. q 113
  17. r 114
  18. s 115
  19. t 116
  20. u 117
  21. v 118
  22. w 119
  23. x 120
  24. y 121
  25. z 122
*/
