// #include <stdio.h>

// int main(){
// char str[10];
// printf("enter the string");
// scanf("%s", &str);
// printf("%s",&str);
//      return 0;
// } 
// they are different scanf and printf for strings
// #include <stdio.h>

// int main(){
//  char str[10];
//   gets(str);
//   puts(str);
//      return 0;
// }


// #include <stdio.h>

// int main(){
// char *ptr ="varun thakur";

// printf("%s",ptr);
//      return 0;
// }

//string.h
#include <stdio.h>
#include <string.h>
int main(){
    char*ptr="varun thakur";
    int length =strlen(ptr);
printf("%d\n",length);
printf("%s",ptr);

     return 0;
}