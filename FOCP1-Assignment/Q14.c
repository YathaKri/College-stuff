#include <stdio.h>

int main() {
    int n, i, j, count = 0, isPrime;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] < 2) continue;  // 0 and 1 are not prime
        isPrime = 1;  // assume number is prime
        for (j = 2; j < a[i]; j++) {
            if (a[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            count++;
    }

    printf("Total prime numbers = %d", count);
    return 0;
}