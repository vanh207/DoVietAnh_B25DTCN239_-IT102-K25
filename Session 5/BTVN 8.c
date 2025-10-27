#include <stdio.h>

int main() {
    int m3;
    int tien = 0;
    
    printf("Nhap so m3 nuoc tieu thu: ");
    scanf("%d", &m3);
    
    if (m3 > 30) {
        tien += (m3 - 30) * 10000;
        m3 = 30;
    }
    if (m3 > 20) {
        tien += (m3 - 20) * 8500;
        m3 = 20;
    }
    if (m3 > 10) {
        tien += (m3 - 10) * 7000;
        m3 = 10;
    }
    if (m3 > 0) {
        tien += m3 * 6000;
    }
    
    printf("Tong tien: %d VNÐ\n", tien);
    
    return 0;
}
