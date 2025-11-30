#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check triangle validity using triangle inequality theorem
    if (a + b > c && b + c > a && c + a > b) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
