// Q16: Divisible by 3 and 5
#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 == 0) printf("Divisible\n");
    else printf("Not divisible\n");
    return 0;
}
