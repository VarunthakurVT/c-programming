// Q4.7
// Write a C program to print the multiplication table of a number. (3-4 Marks)
#include <stdio.h>

int main(){
     int num;
 printf("enter the number whose table you want ");
 scanf("%d",&num);
 for (int a=1;a<=10;a++){
     // printf("%d %c %d %c %d \n",num,'*',a,'=',num*a);
       printf("%d * %d = %d\n", num, a, num * a);
}
     return 0;
}