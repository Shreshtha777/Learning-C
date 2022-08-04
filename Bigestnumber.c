#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter a three number");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
printf("a=%d,b=%d,c=%d\n",a,b,c);
    if(a>b){
        if(a>c){
        printf("a is grater");
         }else {printf("b is greter");
           }
        }
        else{{
             
        if(b>c){
            printf("b is greter");

        }else{
            printf("c is greter");
        }
           }
        }

}