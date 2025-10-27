#include <stdio.h>

int main() {
    float thu_nhap, thue;
    
    printf("So Tien : ");
    scanf("%f", &thu_nhap);
    
    if (thu_nhap <= 5) {
        thue = thu_nhap * 0.05;
    } else if (thu_nhap <= 10) {
        thue = thu_nhap * 0.10;
    } else {
        thue = thu_nhap * 0.15;
    }
    
    printf("Thue thu nhap phai dong : %.2f\n", thue);
    
    return 0;
} 
