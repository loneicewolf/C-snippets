
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


// RESULTS:

/*
     a    b
     b	y
     c	x
     d	w
     e	v
     f	u
     g	t
     h	s
     i	r
     j	q
     k	p
     l	o
     m	n
     n	m
     o	l
     p	k
     q	j
     r	i
     s	h
     t	g
     u	f
     v	e
     w	d
     x	c
     y	b
     z	a
     97	122
     98	121
     99	120
     100	119
     101	118
     102	117
     103	116
     104	115
     105	114
     106	113
     107	112
     108	111
     109	110
     110	109
     111	108
     112	107
     113	106
     114	105
     115	104
     116	103
     117	102
     118	101
     119	100
     120	99
     121	98
     122	97

*/
