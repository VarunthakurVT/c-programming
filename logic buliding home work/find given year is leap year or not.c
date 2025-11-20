#include<stdio.h>
int main(){
    int year ;
    printf("Enter year"); /*if i write year 2034 it shows leap year */
    
    scanf("%d",year);
    (year %4==0)?printf("leap year"):printf("not a leap year");
}