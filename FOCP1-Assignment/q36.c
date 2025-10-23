// Q36: Grade A or B
#include <stdio.h>
int main() {
    int p;
    printf("Enter percentage: ");
    scanf("%d", &p);
    printf("Grade = %c\n", (p >= 75) ? 'A' : 'B');
    return 0;
}
