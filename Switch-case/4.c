#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    double r;
    int choice;
    printf("Enter the radius: ");
    scanf("%lf", &r);
    printf("Options:\n");
    printf("1. Area of Circle\n");
    printf("2. Circumference of Circle\n");
    printf("3. Volume of Sphere\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Area of Circle: %.2f\n", PI * r*r);
            break;
        case 2:
            printf("Circumference of Circle: %.2f\n", 2 * PI * r);
            break;
        case 3:
            printf("Volume of Sphere: %.2f\n", (4.0 / 3.0) * PI * pow(r, 3));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
