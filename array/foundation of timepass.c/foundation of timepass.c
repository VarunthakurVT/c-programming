#include <stdio.h>

int is_prime(long long n) {
    if (n < 2) return 0;              // negatives, 0, 1 -> not prime
    if (n == 2) return 1;             // 2 is prime
    if (n % 2 == 0) return 0;         // even numbers >2 are not prime

    // Check odd divisors up to i*i <= n (square-root test without sqrt)
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0; 
    }
    return 1;
}

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 0;

    if (is_prime(n))
        printf("%lld is prime\n", n);
    else
        printf("%lld is not prime\n", n);
    return 0;
}
