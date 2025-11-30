 #include <stdio.h>
 #include<stdlib.h>
 int main(){
 float n=4;
 float *ptr;

 ptr=(float*) malloc (30* sizeof (float));
 ptr[0]=3.3;
 ptr[1]=9.34;
 ptr[2]=34.3;
 ptr[3]=32.3;
ptr[4]=323,32;
ptr[5]=34.3;

 printf("%f \n",ptr[0]);
 printf("%f \n",ptr[1]);
 printf("%f \n",ptr[2]);
 printf("%f \n",ptr[3]);
 printf("%f \n",ptr[4]);
 printf("%f \n",ptr[5]);
 free(ptr);
 return 0;
 }