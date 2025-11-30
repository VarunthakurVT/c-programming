#include <stdio.h>

// Function declaration for swapping using pointers (call by reference)
void swap(int *a, int *b);

int main() {
    int x, y;
    
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);  // Pass addresses
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}

// Function definition - swaps values using pointers
void swap(int *a, int *b) {
    int temp = *a;   // Store value at address a
    *a = *b;         // Copy value from b to a
    *b = temp;       // Copy original a value to b
}

