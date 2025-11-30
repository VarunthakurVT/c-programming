// #include<stdio.h>
// int main(){
//     int a;
//     int b=0;
//     printf("enter the number:");
//     scanf("%d \n",&a);
//     while (b<=a)
//     {
//      printf("%d\n",b);
//      b++;

//     }
//     return 0;
// }
//it just prints 0to anything you want counting
//simple example 
// #include <stdio.h>
// int main(){
//     int i=0;
//     while (i<4){
//         printf("Happy birthday\n");
//         i=i+1;
//     }
//     return 0;
// }
//to print natural numbers 10 to 20
// #include <stdio.h>
// int main(){
//     int i=10;
//     while(i<=20){
//         printf(" the value of i is :%d\n",i);
//         i=i+1;
//     }
//     return 0;
// }
#include <stdio.h>
int main(){
    int i=1;
    int sum=0;
    while(i<=10){
        sum=sum+i;

        i++;
    }
    printf("the sum of first 10 natural number is %d",sum);
    return 0;
}