#include <stdio.h>

int main() {

    float fahrenheit, celsius, kelvin;
    printf("Enter temperature in (Fahrenheit): ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    kelvin = celsius + 273.15;

    printf("\nTemperature in Celsius: %.2f C \n", celsius);
    printf("Temperature in Kelvin: %.2f K \n", kelvin);

    return 0;
}

