#include<stdio.h>
int main() {
    int i = 10;
    int*j;
    j =&i;

    printf("value of i:%p\n", &i);
     printf("value of j:%p\n", &j);
     printf("value at address j is %d\n",*j);
     printf("value at address j is %d\n",*(&i));
    return 0;
}