#include <stdio.h>
int sum(int, int);
int sum(int a, int b){
    a=4; //this sum function can not change the value of x because the copy of a is provided to this function
    return a+b;
}
int main(){
    int x =3,y=4;
    printf("the value of the function of sum call by reference is %d\n", sum(x,y));
    printf("the value of the x is %d",x);
     return 0;
}