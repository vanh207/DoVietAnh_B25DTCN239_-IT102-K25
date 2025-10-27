#include <stdio.h>

int main() {
    int a, b;  
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    int x = a, y = b;
    while(y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }   
    printf("UCLN cua %d va %d la: %d\n", a, b, x);
    
    return 0;
}
