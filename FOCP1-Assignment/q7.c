#include <stdio.h>
#include <math.h>
int main() {
    float a, b, h;
    printf("Enter two sides: ");
    scanf("%f %f", &a, &b);
    h = sqrt(a * a + b * b);
    printf("Hypotenuse = %.2f\n", h);
    return 0;
}
