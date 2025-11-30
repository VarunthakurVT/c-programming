#include <stdio.h>

int main(){
   FILE*ptr;
   ptr=fopen("varun.txt","a");
//    char c=fgetc(ptr);
//    printf("%c",c);
   fputc('v',ptr);
     return 0;
}