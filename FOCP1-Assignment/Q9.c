#include <stdio.h>

int main() {
    int n, i, found = 0;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter scores: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] == 99) {
            printf("First occurrence of 99 at index %d", i);
            found = 1;
            break;
        }
    }

    if (found==0) printf("99 not found");
    return 0;
}