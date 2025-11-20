// #include <stdio.h>
// int main(){
//     int i=1;
//     do {
//       printf("%d\n",i);
//       i++;

//     }while(i<=3);
//     return 0;
// }
//another example of do while loop 
#include <stdio.h>
int main(){
  int n, i=0;
  printf("enter the number");
  scanf("%d",&n);
  do {
    printf("%d\n",i);
    i++;

  }
  while(i<n);
  return 0;
}