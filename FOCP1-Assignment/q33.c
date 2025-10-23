// Q33: Basic calculator
#include <stdio.h>
int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter choice (1=Add, 2=Sub, 3=Mul, 4=Div): ");
    scanf("%d", &ch);
    if(ch == 1) printf("Sum = %d\n", a+b);
    else if(ch == 2) printf("Difference = %d\n", a-b);
    else if(ch == 3) printf("Product = %d\n", a*b);
    else if(ch == 4) {
        if(b != 0) printf("Quotient = %d\n", a/b);
        else printf("Divide by Zero Error\n");
    }
    else printf("Invalid Choice\n");
    return 0;
}
