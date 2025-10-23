#include <stdio.h>
int main() {
    int n;
    printf("Enter both numbers: ");
    scanf("%d", &n);
    if(n % 2 == 0)
     printf("Even"); 
    else
     printf("Odd");
    return 0;
}
