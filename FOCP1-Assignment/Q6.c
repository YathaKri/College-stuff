#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int bin, dec = 0, base = 1, rem;
        printf("Enter binary: ");
        scanf("%d", &bin);
        while (bin > 0) {
            rem = bin % 10;
            dec += rem * base;
            bin /= 10;
            base *= 2;
        }
        printf("Decimal = %d", dec);
    } 
    else if (choice == 2) {
        int dec, bin = 0, i = 1, rem;
        printf("Enter decimal: ");
        scanf("%d", &dec);
        while (dec > 0) {
            rem = dec % 2;
            bin += rem * i;
            dec /= 2;
            i *= 10;
        }
        printf("Binary = %d", bin);
    }
    else printf("Invalid choice");
    return 0;
}