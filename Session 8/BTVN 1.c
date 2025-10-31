#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d,%d",sizeof(arr),sizeof(arr[0]));
    printf("Cac phan tu trong mang:\n");
    int i;
    for(i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("Do dai cua mang: %d\n", n);
    
    return 0;
}
