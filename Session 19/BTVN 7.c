#include <stdio.h>
#include <stdlib.h>

void inputArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void displayArray(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int getLength(int n) {
    return n;
}

int calculateSum(int *arr, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int findMax(int *arr, int n) {
    int max = *arr;
    for(int i = 1; i < n; i++) {
        if(*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int n, *arr, choice;
    
    do {
        printf("\nMENU:\n");
        printf("1. Input array\n");
        printf("2. Display array\n");
        printf("3. Array length\n");
        printf("4. Sum of array\n");
        printf("5. Maximum element\n");
        printf("6. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter number of elements: ");
                scanf("%d", &n);
                arr = (int*)malloc(n * sizeof(int));
                inputArray(arr, n);
                break;
                
            case 2:
                if(n > 0) {
                    displayArray(arr, n);
                } else {
                    printf("Empty array!\n");
                }
                break;
                
            case 3:
                printf("Array length: %d\n", getLength(n));
                break;
                
            case 4:
                if(n > 0) {
                    printf("Sum: %d\n", calculateSum(arr, n));
                } else {
                    printf("Empty array!\n");
                }
                break;
                
            case 5:
                if(n > 0) {
                    printf("Maximum element: %d\n", findMax(arr, n));
                } else {
                    printf("Empty array!\n");
                }
                break;
                
            case 6:
                free(arr);
                printf("Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 6);
    
    return 0;
}
