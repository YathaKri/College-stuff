// Q28: Roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d >= 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots: %.2f , %.2f\n", r1, r2);
    } else {
        printf("Imaginary Roots\n");
    }
    return 0;
}
