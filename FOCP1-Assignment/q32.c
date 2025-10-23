// Q32: Square, Square Root, Cube
#include <stdio.h>
#include <math.h>
int main() {
    int ch, n;
    printf("Enter choice (1=Square, 2=SquareRoot, 3=Cube) and number: ");
    scanf("%d %d", &ch, &n);
    if(ch == 1) printf("Square = %d\n", n*n);
    else if(ch == 2) printf("Square Root = %.2f\n", sqrt(n));
    else if(ch == 3) printf("Cube = %d\n", n*n*n);
    else printf("Invalid Choice\n");
    return 0;
}
