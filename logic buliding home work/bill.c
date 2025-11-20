
#include <stdio.h>
int main()
{
    int bill,d=0,fbill;
    printf ("enter bill:");
    scanf("%d",&bill);
    if(bill>1000)
    fbill=bill-bill*d/100;
    printf("%d",fbill);
    return 0;
}