#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Ma tran vuong %dx%d:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
