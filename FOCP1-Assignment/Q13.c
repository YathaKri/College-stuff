#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if ((i == 0 || a[i] >= a[i - 1]) && (i == n - 1 || a[i] >= a[i + 1])) {
            printf("Peak element: %d", a[i]);
            return 0;
        }
    }
    return 0;
}