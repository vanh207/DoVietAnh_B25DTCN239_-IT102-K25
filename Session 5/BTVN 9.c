#include <stdio.h>

int main() {
    float he_so_luong;
    int ngay_cong, chuc_vu;
    long long luong, phu_cap = 0, thuong = 0;
    
    printf("Nhap he so luong: ");
    scanf("%f", &he_so_luong);
    printf("Nhap so ngay cong: ");
    scanf("%d", &ngay_cong);
    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chuc_vu);
    
    switch(chuc_vu) {
        case 1:
            phu_cap = 500000;
            break;
        case 2:
            phu_cap = 1000000;
            break;
        case 3:
            phu_cap = 2000000;
            break;
    }
    
    if(ngay_cong > 26) {
        thuong = (ngay_cong - 26) * 200000;
    }
    
    luong = ngay_cong * 160000 * he_so_luong + phu_cap + thuong;
    
    printf("Luong thang: %lld VNÐ\n", luong);
    
    return 0;
}
