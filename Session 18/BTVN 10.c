#include <stdio.h>

void xoaPhanTu(int *arr, int *n, int viTri) {
    for(int *ptr = arr + viTri; ptr < arr + *n - 1; ptr++) {
        *ptr = *(ptr + 1);
    }
    (*n)--;
}

void inMang(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[100] = {1, 2, 3, 4, 5};
    int n = 5;
    
    printf("Mang ban dau: ");
    inMang(mang, n);
    
    xoaPhanTu(mang, &n, 2);
    
    printf("Mang sau khi xoa: ");
    inMang(mang, n);
    
    return 0;
}
