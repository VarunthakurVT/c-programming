#include<stdio.h>
#include<stdlib.h> 
int main(){
    int a,b,r;
    char ch;
    printf("Enter a simple eq");
    scanf("%d""%c" "%d",&a,&ch,&b);
    switch (ch)
    {
        case '+' :
        r=a+b;
        break;
        case '*' :
        r=a*b;
        break;
        case  '-':
        r=a-b;
        break;
        case'/':
         r=a/b ;
         break;
        default:
        printf("invalid");
        exit(1);
    }
    printf("%d",r);
    return 0;
}
