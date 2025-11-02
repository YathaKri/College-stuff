#include <stdio.h>

int main() {
    int n, i, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[100]; // extra space
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position (0=front, %d=middle, %d=end): ", n/2, n);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}