// #include<stdio.h>
// void swap(int*,int*);
// int main()
// {
//     int a=10, b=20;
//     // int swap(int*x,int*y);
//     swap(&a,&b);
//     printf(" the changed value of a is %d\n the changed value of b is %d",a,b);
//   return 0;
// }
// void swap(int*x,int*y){
//     int z;
//     z=*x;
//     *x=*y;
//     *y=z;
   

// }
 
#include <stdio.h>
void swap (int * ,int *);
int main(){
  int a=34,b;
  b=43;
  swap(&a,&b);
  printf("the swap value of a is %d and the swap value of b is %d",a,b);
 
   return 0;
}
void swap (int*a,int*b){
  int z;
  z=*a;
  *a=*b;
  *b=z;
}


