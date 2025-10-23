#include<stdio.h>
int main() {
    int count, entry, largest = 0;
    printf("Enter number of entries: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++) {
        printf("Enter %d Entry: ", i);
        scanf("%d", &entry);

        if (entry > largest) {
            largest = entry;
        }
    }
    printf("Largest is %d", largest);

    return 0;
}