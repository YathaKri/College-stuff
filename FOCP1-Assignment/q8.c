// Q8: Bill with 20% discount
#include <stdio.h>
int main() {
    int itemNo, qty;
    float price, amt, total;
    printf("Enter item no, quantity, unit price: ");
    scanf("%d %d %f", &itemNo, &qty, &price);
    amt = qty * price;
    total = amt - (0.2 * amt);
    printf("Bill after 20%% discount = %.2f", total);
    return 0;
}
