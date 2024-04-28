#include <stdio.h>
#include <math.h>
#define PI 3.14

double arCircle(double radius) {
    return PI * radius * radius;
}
double arRectangle(double length, double width) {
    return length * width;
}
double arTriangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double radius, length, width, base, height;

    do {
        printf("\nMenu:\n");
        printf("1) Compute area of circle\n");
        printf("2) Compute area of rectangle\n");
        printf("3) Compute area of triangle\n");
        printf("4) Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                printf("Area of the circle: %lf\n", arCircle(radius));
                break;
            
            case 2:
                printf("Enter the length of the rectangle: ");
                scanf("%lf", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%lf", &width);
                printf("Area of the rectangle: %lf\n", arRectangle(length, width));
                break;
            
            case 3:
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                printf("Area of the triangle: %lf\n", arTriangle(base, height));
                break;

            case 4:
                printf("Exit!\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice!= '4');

    return 0;
}
