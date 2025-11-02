#include <stdio.h>

int main() {
    int n, i, count = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int marks[n];

    printf("Enter marks: ");
    for (i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    printf("Students scoring 99: ");
    for (i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i + 1); // student number
            count++;
        }
    }

    printf("\nTotal students scoring 99 = %d", count);
    return 0;
}