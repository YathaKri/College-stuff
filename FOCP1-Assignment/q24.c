// Q24: Square if even, Cube if odd
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n % 2 == 0) printf("Square = %d\n", n*n);
    else printf("Cube = %d\n", n*n*n);
    return 0;
}
