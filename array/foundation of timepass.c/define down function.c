// #include<stdio.h>
// void hi(){
//     printf("hi");
// }
// int main(){
// hi();
// return 0;
// }
//gnerealy we do the function define before main

// #include<stdio.h>
// int main(){
//     void hi(){
//   printf("hello ")
//     }
//}
//this not work in gcc
//when you do in below of the naim
#include<stdio.h>
void hi ();
int main(){
    hi();
    return 0;
}
void hi(){
    printf("hello");
}
