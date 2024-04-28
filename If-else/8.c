#include <stdio.h>

int main() {
    
    float num1, num2, num3, minimum, maximum;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    
    minimum = maximum = num1;
     if (num2 < minimum) {
        minimum = num2;
    }
    if (num2 > maximum) {
        maximum = num2;
    }

    if (num3 < minimum) {
        minimum = num3;
    }
    if (num3 > maximum) {
        maximum = num3;
    }

    printf("Minimum: %.2f\n", minimum);
    printf("Maximum: %.2f\n", maximum);

    return 0;
}
