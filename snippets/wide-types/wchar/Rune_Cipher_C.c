/*
  File: Rune_Cipher_C.c
  Author: William Martens
  Date:  27
  Year:  2021
  Month: Feb
  
  Topic(s): [c],[cryptography],[cipher],[alphabetical substitution]
*/
  // Refs: 
 
  // https://stackoverflow.com/questions/66401017/is-there-a-way-to-print-runes-as-characters#66401770 
  // Extremely useful answers, Thanks StackOverflow!

  // https://en.wikipedia.org/wiki/Substitution_cipher
  // https://en.wikipedia.org/wiki/Rotor_machine

#include <stdio.h>


#include <locale.h>
#include <wchar.h>

#define UNICODE_BLOCK_START 0x16A0 /*** https://en.wikipedia.org/wiki/Wide_character ***/
#define UUICODE_BLOCK_END   0x16F1 

int main(){
  setlocale(LC_ALL, "");
  wchar_t SUBALPHA[]=L"ᛠᚣᚫᛞᛟᛝᛚᛗᛖᛒᛏᛋᛉᛈᛇᛂᛁᚾᚻᚹᚷᚳᚱᚩᚦᚢ";
  wchar_t DATA[]=L"hello"; // 4 if starting of@zero, (below)-1
  
  // Test Vectors //
  // ABC       should turn into   ᛠᚣᚫ
  // hello  should turn into      ᛠᚣᚫᛞᛟ
  
  
  int lenofData=0;
  
  //Length finder
    int i=0;
    while(DATA[i]!='\0'){
      lenofData++;  i++;
    }
  
  
  printf("len of DATA is: %d\n",lenofData - 1);
  //Replacer
  for(int i=0; i<lenofData; i++) {
    printf("DATA[%d]=%lc",i,DATA[i]);
    DATA[i]=SUBALPHA[i];
    printf(" is now Replaced by %lc\n",DATA[i]); 
  } 
  
  printf("%ls",DATA);

return 0;
}

/*
          OUTPUTS
          
          len of DATA is: 4
          DATA[0]=h is now Replaced by ᛠ
          DATA[1]=e is now Replaced by ᚣ
          DATA[2]=l is now Replaced by ᚫ
          DATA[3]=l is now Replaced by ᛞ
          DATA[4]=o is now Replaced by ᛟ
                        ᛠᚣᚫᛞᛟ
*/


