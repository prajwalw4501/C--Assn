#include <stdio.h>

int main() {
    
    float basicsalary , incometax;
    printf("Enter the annual basic salary: ");
    scanf("%f", &basicsalary);
    if (basicsalary < 150000) {
        incometax = 0;
    } else if (basicsalary <= 300000) {
        incometax = 0.2 * basicsalary;
    } else {
        incometax = 0.3 * basicsalary;
    }

    printf("Income Tax: %.2f\n", incometax);

    return 0;
}
