#include <stdio.h>

int main() {
    int n,i;
    long long giai_thua = 1;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        giai_thua *= i;
    }
    
    printf("%d! = %lld\n", n, giai_thua);
    
    return 0;
}
