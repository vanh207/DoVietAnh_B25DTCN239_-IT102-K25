#include <stdio.h>

int main() {
    int rows, cols, i, j;
    
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    
    int a[rows][cols];
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Mang vua nhap:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
