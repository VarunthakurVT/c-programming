#include <stdio.h>
#include <math.h>

int main() {
    double base, exp, result;
    
    printf("Enter base number: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exp);
    
    result = pow(base, exp);
    
    printf("%.2lf raised to power %.2lf = %.2lf\n", base, exp, result);
    
    return 0;
}