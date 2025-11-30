#include <stdio.h>

int main() {
int num1 = 10, num2 = 20;  // Correct declaration with initialization
    int *a = &num1, *b = &num2;
    
    printf("Before: num1=%d, num2=%d\n", num1, num2);
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("After: num1=%d, num2=%d\n", num1, num2);  // num1=20, num2=10
    return 0;
}
