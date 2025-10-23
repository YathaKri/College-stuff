// Q20: Expenses with discount
#include <stdio.h>
int main() {
    int qty; float price, exp;
    printf("Enter quantity and prices : ");
    scanf("%d %f", &qty, &price);
    exp = qty * price;
    if(qty > 1000) exp -= 0.1 * exp;
    printf("Expenses = %.2f", exp);
    return 0;
}
