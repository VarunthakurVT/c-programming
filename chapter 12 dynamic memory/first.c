 #include <stdio.h>
 #include<stdlib.h>
 int main(){
 int n;
 int *ptr;
 scanf("%d",&n);
 ptr=(int*) malloc (30* sizeof (int));
 ptr[0]=3;
 ptr[1]=9;
 printf("%d",ptr[0]);
     return 0;
 }