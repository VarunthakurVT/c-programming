#include<stdio.h>
int main(){
    int marks[10];
    for (int i=0;i<5;i++){
        scanf("%d\n ",&marks[i]);
    }
    for (int i=0 ; i<5;i++){
        printf("The value of marks at %d is %d \n",i,marks[i]);
    }

    
}