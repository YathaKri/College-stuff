#include<stdio.h>

int main() {
    int x,i,count=0;
    printf("Enter Number to check if its Cell :");
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        if (x%i==0){
            if (i!=x){
                count+=i;

            }
        }
    }
    if (count==x) printf("%d is a perfect number.",x);
    else printf("%d is not a perfect number.",x);

    return 0;
}