// Q34: Circle properties
#include <stdio.h>
#define PI 3.14159
int main() {
    int ch; float r;
    printf("Enter choice (1=Area, 2=Circumference, 3=Diameter): ");
    scanf("%d", &ch);
    printf("Enter radius: ");
    scanf("%f", &r);
    if(ch == 1) printf("Area = %.2f\n", PI*r*r);
    else if(ch == 2) printf("Circumference = %.2f\n", 2*PI*r);
    else if(ch == 3) printf("Diameter = %.2f\n", 2*r);
    else printf("Invalid Choice\n");
    return 0;
}
