#include <stdio.h>

int main() {
    char ch;
    int n;

    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Enter an integer n: ");
    scanf("%d", &n);
    printf("The next %d characters after '%c' are:\n", n, ch);
    
    for (int i = 1; i <= n; ++i) {
        char nextChar = ch + i;
        printf("%c ", nextChar);
    }

    return 0;
}
