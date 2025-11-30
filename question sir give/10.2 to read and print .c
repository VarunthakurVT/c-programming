#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    
    int matrix[10][10];  // 10x10 max size
    
    // Read 2D array elements
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Print 2D array in matrix format
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);  // 4 spaces for alignment
        }
        printf("\n");
    }
    
    return 0;
}
