#include <stdio.h>
#include <math.h>
int main() {
    int x, y, result;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    result = pow(x, y);
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}
