#include<stdio.h>
struct part
{
    int price;
    int partno;
};
int main(){
    struct part p1,p2;
    printf("enter part number:");
    scanf("$d",&p1.partno);
    printf("enter price:");
    scanf("%d",&p1.price);
    p2=p1;
    printf("%d\n",p1.partno); //there is different method like we use arrow 
    printf("%d",p2.price);
return 0;
}
