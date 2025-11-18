#include <stdio.h>

void themPhanTu(int *arr, int *n, int giaTriMoi, int viTri) {
    for(int *ptr = arr + *n; ptr > arr + viTri; ptr--) {
        *ptr = *(ptr - 1);
    }
    *(arr + viTri) = giaTriMoi;
    (*n)++;
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
    
    themPhanTu(mang, &n, 99, 2);
    
    printf("Mang sau khi them: ");
    inMang(mang, n);
    
    return 0;
}
