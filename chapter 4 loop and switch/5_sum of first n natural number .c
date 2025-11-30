#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Using a for loop to calculate the sum
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum is %d\n",  sum);

    return 0;
}
