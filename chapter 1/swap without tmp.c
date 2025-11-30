#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using arithmetic operations
    a = a + b;  // Step 1: a becomes sum of a and b
    b = a - b;  // Step 2: b becomes original value of a
    a = a - b;  // Step 3: a becomes original value of b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

