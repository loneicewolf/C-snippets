// Replace abc to xyz

#include <stdio.h>
void Replace();

int main() {

  Replace();
  return 0;
}

void Replace(){

  char a[4]="abc";
  char b[4]="xyz";
  printf("%s\n",a);
  for(int i=0; i<sizeof(a);i++){

    a[i]=b[i];

  }

  printf("%s\n",a);

}
