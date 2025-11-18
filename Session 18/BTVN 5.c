#include <stdio.h>

void capNhatPhanTu(int *arr, int giaTriMoi, int viTri) {
    *(arr + viTri) = giaTriMoi;
}

void inMang(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    printf("Mang ban dau: ");
    inMang(mang, n);
    
    capNhatPhanTu(mang, 99, 2);
    
    printf("Mang sau khi cap nhat: ");
    inMang(mang, n);
    
    return 0;
}
