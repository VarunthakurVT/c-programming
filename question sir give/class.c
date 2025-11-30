// to reverse a string/number
#include <stdio.h>

int main() {
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
    return 0;
}
// check that given number is prime number or not in c
// #include <stdio.h>

// int main() {
//     int num, rev = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     while(num != 0) {
//         rev = rev * 10 + num % 10;
//         num /= 10;
//     }
//     printf("Reversed number: %d\n", rev);
//     return 0;
// }

//to add two numbers without using arithematic operator it is very important
// #include <stdio.h>

// int add(int a, int b) {
//     while (b != 0) {
//         int carry = a & b;   // carry bits
//         a = a ^ b;           // addition without carry
//         b = carry << 1;      // carry shifted left
//     }
//     return a;
// }

// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
//     int sum = add(num1, num2);
//     printf("Sum = %d\n", sum);
//     return 0;
// }
