#include <stdio.h>
int main(){
     int num ;
     
     printf("please neter a Number:");
      scanf("%d",&num);
      int rem= num%2;
      if( rem == 0){
            printf(" Number is even");
      } else{
         printf(" Number is odd");
      }
     
      return 0;

}