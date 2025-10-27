#include <stdio.h>

int main() {
    int n, temp, reversed = 0;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    
    if (n == reversed) {
        printf("%d la so doi xung\n", n);
    } else {
        printf("%d khong phai la so doi xung\n", n);
    }
    
    return 0;
}
