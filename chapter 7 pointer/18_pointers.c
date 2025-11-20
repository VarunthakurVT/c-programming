// pointer is just address of the location of the variable store in a memory
// eg as int i=2;   i--is location name and 2 is value  ,100 is address & is address of and *is value at 
#include<stdio.h>
int main (){
    int i=2;
    printf("%d %d %d ",i ,&i,*(&i));  // i represent value of i and &i is the address i and *(&i) is the value at 
    return 0;
}
