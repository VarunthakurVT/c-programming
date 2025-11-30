#include <stdio.h>
int change(int a );
int change  (int a){
    a=23;
 
    return 0;
}

int main(){
 
    int b=1;
    change (b);
    printf("the changed value of the b is %d",b);

     return 0;
}