#include <stdio.h>

void average(int *arr, int n, float *result) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    *result = (float)sum / n;
}

int main() {
    int n;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    float ketQua;
    average(arr, n, &ketQua);
    
    printf("Gia tri trung binh cua mang la: %.2f\n", ketQua);
    
    return 0;
}
