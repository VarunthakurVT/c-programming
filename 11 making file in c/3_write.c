#include <stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("varun.txt","w");
    int num=434;

    fprintf(ptr,"%d",num);
   

     return 0;
}