#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size <= 1) return size;
    
    int newSize = 1;
    int i, j;
    for (i = 1; i < size; i++) {
        int isDuplicate = 0;
        
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    
    return newSize;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int newSize = removeDuplicates(arr, size);
    
    printf("Mang sau khi loai bo trung lap: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Kich thuoc mang moi: %d\n", newSize);
    
    return 0;
}
