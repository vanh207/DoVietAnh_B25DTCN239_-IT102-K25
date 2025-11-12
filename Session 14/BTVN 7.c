#include <stdio.h>
#include <stdbool.h>

bool kiemTraSoNguyenTo(int number) {
    if (number < 2) {
        return false;
    }
    int i;
    for (i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);
    
    if (kiemTraSoNguyenTo(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }
    
    return 0;
}
