// A scientific calculator computes the absolute magnitude of values irrespective of sign
#include <stdio.h>
int main(){
    int num, absolute;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0){
        absolute = -num;}
    else{
        absolute = num;}
    printf("The absolute value of %d is %d", num, absolute);
    return 0;
}
