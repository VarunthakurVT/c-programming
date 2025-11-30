// #include <stdio.h>
// int main(){
//     int i;
//     for (i=0;i<4;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// } this is the example of incremant
// #include <stdio.h>
// int main(){
//     int i;
//     for(i=5; i ;i--){
//         if(i==4)
//         continue;
//     printf("%d\n",i);}
//     return 0;
// }
#include <stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i =10; i ;i--){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}