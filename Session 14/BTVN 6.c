#include <stdio.h>

int timSoLonNhat(int arr[], int size) {
    int max = arr[0];
    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Nhap %d phan tu:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int soLonNhat = timSoLonNhat(arr, size);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);
    
    return 0;
}
