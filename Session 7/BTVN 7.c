#include <stdio.h>

int main() {
    int a, b;
    
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    
    printf("Cac so nguyen to trong khoang [%d, %d]:\n", a, b);
    
    for(int i = a; i <= b; i++) {
        if(i < 2) continue;
        
        int is_prime = 1;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if(is_prime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
