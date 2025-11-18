#include <stdio.h>

int findMax(int *arr, int n) {
    int max = *arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
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
    
    int max = findMax(arr, n);
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    
    return 0;
}
