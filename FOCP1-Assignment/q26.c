// Q26: Valid triangle (angles sum)
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b + c == 180) printf("Valid Triangle\n");
    else printf("Invalid Triangle\n");
    return 0;
}
