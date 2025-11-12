#include <stdio.h>

int binarySearch(int arr[], int size, int searchValue) {
    int left = 0;
    int right = size - 1;
    int mid;
    
    while(left <= right) {
        mid = left + (right - left) / 2;
        
        if(arr[mid] == searchValue) {
            return mid;
        } else if(arr[mid] > searchValue) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int number1;
    printf("Enter number to search: ");
    scanf("%d", &number1);
    
    int result = binarySearch(arr, size, number1);
    
    if(result != -1) {
        printf("Number %d found at position %d\n", number1, result);
    } else {
        printf("Number %d not found in the array\n", number1);
    }
    
    return 0;
}
