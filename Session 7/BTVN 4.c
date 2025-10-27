#include <stdio.h>

int main() {
    int m, n,i,j;
    
    printf("Nhap chieu dai m: ");
    scanf("%d", &m);
    printf("Nhap chieu rong n: ");
    scanf("%d", &n);
    
    for( i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
