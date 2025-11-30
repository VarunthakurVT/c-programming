#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    int arr[100];
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calculate sum
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("Sum of all elements = %.2f\n", sum);
    
    return 0;
}
