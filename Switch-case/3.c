#include <stdio.h>

int main() {
    
    int x, y, num;
    printf("Enter the first number (x): ");
    scanf("%d", &x);
    printf("Enter the second number (y): ");
    scanf("%d", &y);
    
    printf("-----Options-----\n");
    printf("1. Equality\n");
    printf("2. Less Than\n");
    printf("3. Quotient and Remainder\n");
    printf("4. Range\n");
    printf("5. Swap\n");

    int option;
    printf("Enter your choice : ");
    scanf("%d", &option);

    switch (option) {
        case 1:
        if (x == y) {
                printf("%d is equal to %d\n", x, y);
            } else {
                printf("%d is not equal to %d\n", x, y);
            }
            break;
        case 2:
        if (x < y) {
                printf("%d is less than %d\n", x, y);
            } else {
                printf("%d is greater than %d\n", x, y);
            }
            break;
        case 3:
        if (y != 0) {
                printf("Quotient: %d\n", x / y);
                printf("Remainder: %d\n", x % y);
            } else {
                printf("Error:\n");
            }
            break;
        case 4:
        printf("Enter a number to check if it lies between x and y: ");
            scanf("%d", &num);

            if (num >= x && num <= y) {
                printf("%d lies between %d and %d (both inclusive).\n", num, x, y);
            } else {
                printf("%d does not lie between %d and %d.\n", num, x, y);
            }
            break;
        case 5:
        printf("Before swapping: x = %d, y = %d\n", x, y);
            int temp;
            temp = x;
            x = y;
            y = temp;
            printf("After swapping: x = %d, y = %d\n", x, y);
            break;
        default:
            printf("Invalid option.\n");
    }

    return 0;
}
