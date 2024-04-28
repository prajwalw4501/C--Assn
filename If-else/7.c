#include <stdio.h>

int main() {
    
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z') {
         ch = ch - ('a' - 'A');
    }
    printf("Character with inverted case: %c\n", ch);

    return 0;
}
