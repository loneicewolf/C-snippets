#include <stdio.h>

  #define n printf("\n");
  #define t printf("\t");
  
  #define FOR2 for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);

int main() {

  //for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);
  //for(int i='a',j='a';i<='z';printf("%d\t%d\n",i,j),j++,i++);
//  FOR2

    
    
// +
 for(int i='a',j='z';i<='z'; printf("%d\t%d\n",i,j),j--,i++);
//outputs
//97	122
//98	121
//99	120
//100	119
//101	118
//102	117
//103	116
//104	115
//105	114
//106	113
//107	112
//108	111
//109	110
//110	109
//111	108
//112	107
//113	106
//114	105
//115	104
//116	103
//117	102
//118	101
//119	100
//120	99
//121	98
//122	97

    
  return 0;
}


