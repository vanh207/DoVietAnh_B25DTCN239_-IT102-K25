#include <stdio.h>

int main() {
    int n, x, count = 0;
    
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);
    if (n < 0) {
        n = -n;
    }
    
    int temp = n;
    while (temp > 0) {
        if (temp % 10 == x) {
            count++;
        }
        temp /= 10;
    }
    
    printf("Chu so %d xuat hien %d lan trong so %d\n", x, count, n);
    
    return 0;
}
