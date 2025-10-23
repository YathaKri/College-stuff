#include<stdio.h>

int main() {
    int x,i;
    printf("Enter Number to get its factors :");
    scanf("%d",&x);
    printf("Factors of %d are as follows:-\n",x);
    for (i=1;i<=x;i++){
        if (x%i==0) printf("%d\n",i);
    }

    return 0;
}