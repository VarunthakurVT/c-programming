#include <stdio.h>
int sum(int *, int *);
int sum(int* a, int *b){
    *a=4; //by call by reference we give the reference by the address of and we can change it this is called call by reference
    return *a+*b;
}
int main(){
    int x =3,y=4;
    printf("the value of the function of sum call by reference is %d\n", sum(&x,&y));
    printf("the value of the x is %d",x);
     return 0;
}