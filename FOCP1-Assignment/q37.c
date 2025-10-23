// Q37: Triangle classification
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) printf("Equilateral\n");
    else if(a == b || b == c || a == c) printf("Isosceles\n");
    else if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) printf("Right Angled\n");
    else printf("None\n");
    return 0;
}
