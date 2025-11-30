#include <stdio.h>

// Function declaration
int fibonacci(int n);

int main() {
    int n, i;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}

// Recursive function definition
int fibonacci(int n) {
    if(n == 0) {
        return 0;      // Base case 1
    }
    else if(n == 1) {
        return 1;      // Base case 2
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);  // Recursive case
    }
}
