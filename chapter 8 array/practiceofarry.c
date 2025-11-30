// #include <stdio.h>

// int main(){
//   int marks[90];
//   marks[0]=34;
//   printf("%d ",marks[0]);
//      return 0;
// } 
// #include <stdio.h>

// int main(){
// int marks[90]={2,23,232,34,45,56,67,77};
// printf("%d",marks[4]);
//      return 0;
// }
// #include <stdio.h>

// int main(){
//  int a=34;
//  int *i=&a;
//  i++;
//  printf("%p",i);
//      return 0;
// }
 

// int main(){
// int marks[90]={2,23,232,34,45,56,67,77};
// int *ptr=&marks[0];


//      return 0;
// }
  
#include <stdio.h>

int main(){
  
 int arr[3][2] = {{1, 4},
                  {7, 9},
                   {11, 22}};
  for (int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d  ",arr[i][j]); 
    }
    printf("\n");
  }
     return 0;
}