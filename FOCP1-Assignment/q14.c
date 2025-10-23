#include <stdio.h>
int main() {
    int a, b;
    printf("Enter both numbers: ");
    scanf("%d %d", &a, &b);
    printf("Largest = %d\n", (a > b) ? a : b);
    return 0;
}
