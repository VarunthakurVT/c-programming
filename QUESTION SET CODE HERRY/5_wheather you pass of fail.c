#include <stdio.h>

int main(){
  int sub1,sub2,sub3;
  printf("enter the sub1 marks");
  scanf("%d",&sub1);
  printf("enter the sub2 marks");
  scanf("%d",&sub2);
  printf("enter the sub3 marks");
  scanf("%d",&sub3);
 printf("your marks %d %d %d/n",sub1,sub2,sub3);
 if(sub1<33||sub2<33||sub3<33){
    printf("you are fail due to less marks in one subject");}
    return 0;
 }
 