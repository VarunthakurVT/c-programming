#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a number");
    scanf("%d %d %d ",&a,&b,&c);
    int max =(a>b)?a:b;
    printf("the greater number is%d",max);
    return 0;
}