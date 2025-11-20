//*i can only store address only 
#include<stdio.h>
int main(){
    int i=5,*j;
    j=&i;
    printf("%d %d %d ",i ,*j, *(&i));
    return 0;
}
