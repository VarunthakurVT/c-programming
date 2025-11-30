#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // 1. Year divisible by 400 OR
    // 2. Year divisible by 4 but not by 100
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is Not a Leap Year\n", year);
    }

    return 0;
}
