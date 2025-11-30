#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check the least significant bit using bitwise AND with 1
    if (num & 1) {
        printf("%d is Odd\n", num);
    } else {
        printf("%d is Even\n", num);
    }

    return 0;
}
