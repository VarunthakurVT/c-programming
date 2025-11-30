#include<stdio.h>
int main(){
    int a,b,r;
    char ch;
    printf("Enter a simple eq");
    scanf("%d %c %d",&a,&ch,&b);
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
         if (b == 0) {
                printf("Error: Division by zero!");
                return 1; 
            }
            r = a / b;
            break;
          default:
            printf("Invalid operator!");
            return 1;       
    }
    printf("Result = %d", r);
    return  0; 
}
