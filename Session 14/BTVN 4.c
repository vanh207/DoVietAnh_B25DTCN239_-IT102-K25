#include <stdio.h>

void printarr(int arr[], int size) {
    printf("Cac phan tu trong mang: ");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, i;
    
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Nhap %d phan tu:\n", size);
    for (i = 0; i < size; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printarr(arr, size);
    
    return 0;
}
