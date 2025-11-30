#include <stdio.h>

int main() {
    int rows, i, j, num = 1;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    
    for(i = 1; i <= rows; i++) {
        // Print numbers for current row
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}
