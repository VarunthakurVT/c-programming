#include<stdio.h>
int main(){
    int a,b,s; int sum(int,int);
    printf("enter two numbers:");
    scanf("%d %d ",&a ,&b);
    s=sum(a,b);
    printf("%d",s);
    }

int sum(int x,int y){
    int z;
    z=x+y;

return z;
}   

