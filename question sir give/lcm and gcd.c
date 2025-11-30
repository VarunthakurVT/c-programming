#include <stdio.h>

int main() {
    int n1, n2, gcd, lcm, a, b;
    
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    
    a = n1;
    b = n2;
    
    // GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // LCM = (n1 * n2) / GCD
    lcm = (n1 * n2) / gcd;
    
    printf("GCD of %d and %d = %d\n", n1, n2, gcd);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);
    
    return 0;
}
