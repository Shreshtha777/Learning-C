#include <stdio.h>
int main(){
    int num ;
    printf("Please enter a number:");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++)
    {
        if(i==5){
           continue;
        }
        printf("%dX%d=%d\n",num,i,num*i);
       
    }
    return 0 ;
}