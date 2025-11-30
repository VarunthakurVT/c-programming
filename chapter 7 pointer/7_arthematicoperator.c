#include <stdio.h>

int main(){
    int a=34;
    int*ptr=&a;
    printf("the address of a is %u \n",&a);
    printf("the address of ptr is %u \n",ptr);
    ptr++;//after this this give +4 pointer location because int takes 4 bytes of this
    printf("the address of ptr is %u \n",ptr);


     return 0;
}