#include <stdio.h>

int main() {
 for(char ALPHAS[26][26]={}, i=0; i<26; i++){
    ALPHAS[i][i]=i;
   printf("%d\n",ALPHAS[i][i]);
  }
  // 0 - 25
  return 0;
}

//Outputs
// 0
// 1
// ...
// 25
