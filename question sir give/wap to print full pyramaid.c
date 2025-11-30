#include <stdio.h>

int main() {
    int rows, i, space, k = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++, k = 0) {
        // Print leading spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        while (k != 2 * i - 1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    
    return 0;
}
