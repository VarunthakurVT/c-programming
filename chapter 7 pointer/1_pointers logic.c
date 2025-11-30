// pointer is just address of the location of the variable store in a memory
// eg as int i=2;   i--is location name and 2 is value  ,100 is address & is address of and *is value at 
#include<stdio.h>
int main (){
    int i=2;
    int *j=&i; // j is the pointer pinting to i and it is the pointing integer
    printf(" the value of i is %d\n  the value of address of the i is %p\n the value of i is  %d\n ",i ,&i,*(&i));  // i represent value of i and &i is the address i and *(&i) is the value at 
    printf(" the address of the j is %p\n  ",j);
    printf("the value at j is %d \n", *j);
    printf("the address of the j is %p",&j);
   
    return 0;
}
