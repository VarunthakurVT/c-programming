#include <stdio.h>
struct emp
{
 int code;
 float salary;
 char name[10];
};
 int main(){
    struct emp e1;
    e1.code=34;
    struct emp*ptr;
    ptr=&e1;
  printf("%d \n", (*ptr).code);
  printf("%d", ptr->code);
 }