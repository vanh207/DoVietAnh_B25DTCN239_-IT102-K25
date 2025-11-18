#include <stdio.h>

int timKiem(int *arr, int n, int giaTri) {
    int *ptr = arr;
    for(int i = 0; i < n; i++) {
        if(*ptr == giaTri) {
            return i;
        }
        ptr++;
    }
    return -1;
}

int main() {
    int mang[] = {10, 25, 30, 45, 50};
    int n = 5;
    int giaTriCanTim = 30;
    
    int viTri = timKiem(mang, n, giaTriCanTim);
    
    if(viTri != -1) {
        printf("Tim thay %d tai vi tri: %d\n", giaTriCanTim, viTri);
    } else {
        printf("Khong tim thay %d trong mang\n", giaTriCanTim);
    }
    
    return 0;
}
