#include <stdio.h>

int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Reversed digits: ");
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        printf("%d", digit);   // Print the digit
        num = num / 10;        // Remove the last digit
    }
    printf("\n");

    return 0;
}
