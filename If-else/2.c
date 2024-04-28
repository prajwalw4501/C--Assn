#include <stdio.h>

int main() {
    
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 7 == 0) {
        printf("%d is divisible by both 5 and 7.\n", n);
    } else {
        printf("%d is not divisible by both 5 and 7.\n", n);
    }

    return 0;
}
