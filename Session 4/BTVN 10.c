#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("\nCac so sau khi sap xep tu nho den lon: %d, %d, %d\n", a, b, c);
    
    return 0;
}
