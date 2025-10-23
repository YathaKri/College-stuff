// Q25: Course eligibility
#include <stdio.h>
int main() {
    int m1, m2, m3;
    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);
    if(m1 >= 60 && m2 >= 60 && m3 >= 60) printf("Degree Course\n");
    else if(m1 >= 45 && m2 >= 45 && m3 >= 45) printf("Diploma Course\n");
    else printf("Certificate Course\n");
    return 0;
}
