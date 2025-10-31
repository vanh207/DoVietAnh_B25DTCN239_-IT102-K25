#include <stdio.h>

int main() {
    int arr[5];
    
    printf("Nhap 5 phan tu cho mang:\n");
    int i;
    for(i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
     
    printf("\nMang sau khi nhap:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
