#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num<=9){
    printf("one digit number");
    }
    else if(num>=10&&num<=99){
        printf("two digit number");}


    else  if(num>=100&&num<=999){
        printf("three digit number");}
        else {
            printf("invalid digit number");
        }
  return 0;
    }
