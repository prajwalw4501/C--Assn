#include <stdio.h>
#include <math.h>
#define pi 3.14

int main() {
    
    float radius, height, surfacearea, volume;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    surfacearea = 2 * pi * radius * radius + 2 * pi * radius * height;
    volume = pi * radius * radius * height;

    printf("\nSurface Area of the Cylinder: %.2f\n", surfacearea);
    printf("Volume of the Cylinder: %.2f\n", volume);
    
    return 0;
}
