#include <stdio.h>

int main() {
    int arr[] = {1,5,2,3,23,5,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);   
    int max_count = 0;
    int i, j, k;
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
    }
    printf("Cac phan tu xuat hien nhieu nhat (%d lan): ", max_count);
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == max_count) {
            int printed = 0;
            for (k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    printed = 1;
                    break;
                }
            }
            if (!printed) {
                printf("%d ", arr[i]);
            }
        }
    }
    
    return 0;
}
