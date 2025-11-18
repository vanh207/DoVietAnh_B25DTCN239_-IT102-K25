#include <stdio.h>

void tinhTong(int *a, int *b, int *ketQua) {
    *ketQua = *a + *b;
}

int main() {
    int so1 = 15, so2 = 25;
    int ketQua;
    
    tinhTong(&so1, &so2, &ketQua);
    
    printf("Tong cua %d va %d la: %d\n", so1, so2, ketQua);
    
    return 0;
}
