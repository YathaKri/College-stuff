#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x and y: ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) printf("Quadrant I");
    else if (x < 0 && y > 0) printf("Quadrant II");
    else if (x < 0 && y < 0) printf("Quadrant III");
    else if (x > 0 && y < 0) printf("Quadrant IV");
    else if (x == 0 && y == 0) printf("Origin");
    else if (x == 0) printf("Y-axis");
    else if (y == 0) printf("X-axis");
    else printf("idk man");

    return 0;
}