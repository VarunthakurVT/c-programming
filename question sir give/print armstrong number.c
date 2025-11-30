#include <stdio.h>

int main() {
    int n, i, num, digit, sum;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for (i = 1; i <= 1000; i++) {
        num = i;
        sum = 0;

        while (num > 0) {
            digit = num % 10;          // get last digit
            sum = sum + digit*digit*digit; // cube of digit (3-digit case)
            num = num / 10;            // remove last digit
        }

        if (sum == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}

