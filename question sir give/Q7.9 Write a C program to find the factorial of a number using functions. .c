#include <stdio.h>
int fact (long int);
int main(){
     long int num;
printf("enter a number");
scanf("%d",&num);
printf("the factorial is %d",fact(num));
     return 0;
}

int fact ( long int n){
    if (n==1 || n==0){
        return 1 ; //base condition
    }
    return fact (n-1)*n;
}
