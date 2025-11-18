#include <stdio.h>

int compareArrays(int *a, int *b, int n) {
    for(int i = 0; i < n; i++) {
        if(*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int a[n], b[n];
    
    printf("Nhap cac phan tu cho mang a:\n");
    for(int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Nhap cac phan tu cho mang b:\n");
    for(int i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
    int ketQua = compareArrays(a, b, n);
    
    if(ketQua == 1) {
        printf("Hai mang giong nhau\n");
    } else {
        printf("Hai mang khac nhau\n");
    }
    
    return 0;
}
