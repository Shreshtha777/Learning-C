#include <stdio.h>
int main(){
  int c = 65;
  int d = 97;
  printf("Chapital alphabets");
     for( int i=0; i<26; i++){
        printf("%c\n",c++);
     }
      printf("Small alphabets");
     for( int i=0; i<26; i++){
        printf("%c\n",d++);
     }
return 0;
}