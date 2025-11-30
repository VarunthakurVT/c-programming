#include <stdio.h>

int main(){
    int fact=1 ,count,num;
    printf("which factorial you do ");
    scanf("%d",&num);
for (count=1;count<=num;count++){
    fact=fact*count;

}
printf("the fact of %d is %d",num,fact);
     return 0;
}