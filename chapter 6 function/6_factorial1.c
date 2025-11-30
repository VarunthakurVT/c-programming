#include <stdio.h>
int fact (long int);
int fact ( long int n){
    if (n==1 || n==0){
        return 1 ; //base condition
    }
    return fact (n-1)*n;
}
int main(){
    long int a;
    printf("enter the factorial");
    scanf("%d",&a);
    printf("the value you enter %d the value of factorial is %d",a,fact(a));

     return 0;
}