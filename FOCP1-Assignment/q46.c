#include<stdio.h>

int main() {
    int number, primeStatus = 1;
    printf("Enter your number: ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            primeStatus = 0;
        }

    }
    if (primeStatus==1) printf("%d is a prime number.\n ",number);
    else printf("%d is a composite number.\n ",number);

    return 0;
}