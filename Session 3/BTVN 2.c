#include <stdio.h>
int main() {
    float celsius, Fahrenheit;
    printf("nhap nhiet do celsius ");
    scanf("%f",&celsius);
    Fahrenheit =celsius * 9/5 + 32;
    printf("nhiet do doi tu celsius sang Fahrenheit la:  %.2f \n",Fahrenheit);
    return 0;
} 
