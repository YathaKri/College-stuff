// Q29: Day of week (1–7)
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number (1-7): ");
    scanf("%d", &n);
    if(n == 1) printf("Monday\n");
    else if(n == 2) printf("Tuesday\n");
    else if(n == 3) printf("Wednesday\n");
    else if(n == 4) printf("Thursday\n");
    else if(n == 5) printf("Friday\n");
    else if(n == 6) printf("Saturday\n");
    else if(n == 7) printf("Sunday\n");
    else printf("Invalid Input\n");
    return 0;
}
