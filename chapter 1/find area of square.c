#include <stdio.h>
int main(){
    int length, breadth, area;
    printf("Enter value of length: ");
    scanf("%d", &length); // Use %d for int, not %f
    printf("Enter value of breadth: ");
    scanf("%d", &breadth); // Use %d for int, not %f
    area = length * breadth;
    printf("Area is: %d\n", area);
    return 0;
}
