#include <stdio.h>

int gcd(int a, int b) {
    int min = (a < b) ? a : b;
    int operations = 0;
    for (int i = min; i >= 1; i--) {
        operations++;
        if (a % i == 0 && b % i == 0) {
            printf("Number of operations: %d\n", operations);
            return i;
        }
    }
    printf("Number of operations: %d\n", operations);
    return 1;
}

int main() {
    int a, b;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d%d", &a, &b);
    printf("GCD of %d and %d is: %d\n", a, b, gcd(a, b));
    return 0;
}
