#include <stdio.h>
int sum (int,int);
int sum (int x ,int y){
    printf("the sum is %d",x+y);
    return x,y;
}

int main(){
   int a=34;
    int b=334;
    sum(a,b);

     return 0;
}