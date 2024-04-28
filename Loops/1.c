#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    //printf("Enter positive numbers:\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
        sum += n;
    }

    printf("Sum of the positive numbers entered: %d\n", sum);

    return 0;
}
