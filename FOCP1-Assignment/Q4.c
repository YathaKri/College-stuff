#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: using temp
    temp = a; 
    a = b; 
    b = temp;
    printf("Using temp: a=%d b=%d\n", a, b);

    // Method 2: using + and -
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Using + and -: a=%d b=%d\n", a, b);

    // Method 3: using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Using XOR: a=%d b=%d\n", a, b);

    // Method 4: using pointers
    int *p = &a, *q = &b;
    temp = *p; *p = *q; *q = temp;
    printf("Using pointers: a=%d b=%d\n", a, b);

    return 0;
}