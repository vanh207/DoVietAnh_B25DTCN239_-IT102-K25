#include <stdio.h>
#include <math.h>
int main() {
    float radius,area,perimeter;
    printf("nhap ban kinh hinh tron: ");
    scanf("%f",&radius);
    area = 2* M_PI * radius;
    perimeter = M_PI * pow(radius,2);
    printf("dien tich hinh tron la: %.2f, chu vi hinh tron la: %.2f",area,perimeter);
	return 0;
} 
