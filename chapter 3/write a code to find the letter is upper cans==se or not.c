#include<stdio.h>
int main(){ 
    char ch;
    printf("write a letter");
    scanf(" %c",&ch);
    if(ch >='A'&& ch<='Z'){
        printf("upper case");
    }
    else if (ch>='a'&& ch<='z'){
        printf("lowercase");
    }
    else{
        printf("not english letter");
    }
return 0;
    }
    
    

















