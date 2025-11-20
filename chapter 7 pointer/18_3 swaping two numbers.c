#include<stdio.h>
int main()
{
    int a=10, b=20;
    // int swap(int*x,int*y);
    swap(&a,&b);
    printf("%d %d",a,b);
  return 0;
}
void(swap(int*x,int*y)){
    int z;
    z=*x;
    *x=*y;
    *y=z;
   

}




