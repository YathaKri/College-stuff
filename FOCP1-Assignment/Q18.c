#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Duplicates: ");
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("-1");
    return 0;
}