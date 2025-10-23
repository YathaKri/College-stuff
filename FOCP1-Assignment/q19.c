#include <stdio.h>
int main() {
    int age; char nat[20];
    printf("Enter Age and Nationality: ");
    scanf("%d %s", &age, &nat);
    if(age>=18)
        printf("Eligible"); 
    else 
        printf("Not Eligible");
    return 0;
}
