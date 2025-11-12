#include <stdio.h>

long long tinhGiaiThua(int number) {
    long long factorial = 1;
    int i;
    for (i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Khong the tinh giai thua cho so am.\n");
    } else {
        long long ketQua = tinhGiaiThua(n);
        printf("Giai thua cua %d la: %lld\n", n, ketQua);
    }
    
    return 0;
}
