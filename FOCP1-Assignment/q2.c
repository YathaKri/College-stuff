#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter number : ");
    scanf("%d",&x);
    printf("Enter number : ");
    scanf("%d",&y);
    printf("Enter number : ");
    scanf("%d",&z);
    printf("The average of %d ,%d and %d will be : %d",x,y,z,(x+y+z)/3);
    return 0;
}