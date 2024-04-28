#include <stdio.h>
 
int main(){
    
    float a,b,c,d,e;
    float total, percentage;
 
    printf("Enter marks of five subjects(out of 100): :- ");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
 
    total = a + b + c + d + e;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %.2f / 500\n", total);      
    printf("Percentage = %.2f ", percentage);
 
    return 0;
}
