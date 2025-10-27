#include <stdio.h>

int main() {
    int tuoi;
    int gia_ve = 20000;
    float tien_ve;
    
    printf("Nhap Tuoi : ");
    scanf("%d", &tuoi);
    
    if (tuoi < 0 || tuoi > 120) {
        printf("Tuoi khong hop le\n");
    } else if (tuoi < 6) {
        printf("So tien ve : 0 VNÐ\n");
    } else if (tuoi <= 18) {
        tien_ve = gia_ve * 0.5;
        printf("So tien ve : %.0f VNÐ\n", tien_ve);
    } else if (tuoi <= 60) {
        tien_ve = gia_ve;
        printf("So tien ve : %.0f VNÐ\n", tien_ve);
    } else {
        tien_ve = gia_ve * 0.7;
        printf("So tien ve : %.0f VNÐ\n", tien_ve);
    }
    
    return 0;
}
