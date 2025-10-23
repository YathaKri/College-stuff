// Q41: Marks to Grade
#include <stdio.h>
int main() {
    int m;
    printf("Enter marks: ");
    scanf("%d", &m);
    if(m >= 75) printf("Grade A\n");
    else if(m >= 50) printf("Grade B\n");
    else if(m >= 35) printf("Grade C\n");
    else printf("Fail\n");
    return 0;
}
