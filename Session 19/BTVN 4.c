#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(*(arr + i) == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    int soLanXuatHien = countValue(arr, n, x);
    printf("So lan xuat hien cua %d trong mang la: %d\n", x, soLanXuatHien);
    
    return 0;
}
