#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("enter number:");
    scanf ("%d %d %d",&a,&b,&c);
    max=(a>b)?a:b;
    printf("the greater number is %d",max);
    max=(b>c)?b:c;
    printf("greater number is %d",max);
    return 0;
}
