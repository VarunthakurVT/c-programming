#include <stdio.h>

int main(){
    FILE*ptr;
    ptr=fopen("varun.txt","r");
    int num;
    if (ptr==NULL){
        printf("file do not exist sorry");
    }
    else{
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d \n ",num);
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d \n ",num);
    }
    fclose(ptr);
     return 0;
}