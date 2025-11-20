#include<stdio.h>//switch(exp){ case 1: stat; break; case2: stat; break;}
int main(){
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    switch (n)
    {
        case 1:
        printf("hello");
        break;
        case 2:
        printf("hi");
        break;
        case 3:
        printf("bye");
        break;
        default:
        printf("invalid");
    }
    return 0;
}
