#include <stdio.h>

int main(){
   int marks[5];
   for ( int i=0;i<5;i++)
   {
    printf("enter the marks:");
    scanf("%d",&marks[i]);
   }
    for ( int i=0;i<5;i++)
   {
    printf("the marks at index %d is %d \n",i,marks[i]);
    
   }
   
     return 0;
}