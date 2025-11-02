#include <stdio.h>

int main() {
    int n, i, e = 0, o = 0;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    int a[n], even[n], odd[n];

    printf("Enter scores: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }

    printf("Even scores: ");
    for (i = 0; i < e; i++) 
        printf("%d ", even[i]);
    printf("\nOdd scores: ");
    for (i = 0; i < o; i++) 
        printf("%d ", odd[i]);
    return 0;
}