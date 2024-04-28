#include <stdio.h>

int main() {
    
    float basicsalary, pf, tax, hra, da, netsalary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicsalary);
    pf = 0.02 * basicsalary;   
    tax = 0.03 * basicsalary;   
    hra = 0.05 * basicsalary;   
    da = 0.08 * basicsalary;   
    netsalary = basicsalary + hra + da - pf - tax;
    
    printf("Net Salary: %.2f\n", netsalary);

    return 0;
}
