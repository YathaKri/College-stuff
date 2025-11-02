#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, r, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    // count digits
    int t = n;
    while (t != 0) {
        digits++;
        t /= 10;
    }

    // find sum of powers of digits
    t = n;
    while (t != 0) {
        r = t % 10;
        sum += pow(r, digits);
        t /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is Not an Armstrong number",n);
    return 0;
}