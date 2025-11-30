#include <stdio.h>

int main(){
   int i=12;
   int *j=&i;
   int **k=&j;
   printf("the value of the i is %d",i);
   printf("the value of the i is %d",*j);
   printf("the value of the i is %d",**k);
   
     return 0;
}