#include <stdio.h>
int main() {
    float sal;
    printf("Enter basic salary: ");
    scanf("%f", &sal);
    printf("Net Salary = %.2f\n", sal + 0.12 * sal);
    return 0;
}

