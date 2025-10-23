// Q42: Salary category (nested if)
#include <stdio.h>
int main() {
    float sal;
    printf("Enter basic salary: ");
    scanf("%f", &sal);
    if(sal < 20000) printf("Low\n");
    else {
        if(sal <= 50000) printf("Medium\n");
        else printf("High\n");
    }
    return 0;
}
