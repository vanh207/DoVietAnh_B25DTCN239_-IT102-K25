#include <stdio.h>

void sapXep(int *arr, int n) {
    int *i, *j;
    for(i = arr; i < arr + n - 1; i++) {
        for(j = i + 1; j < arr + n; j++) {
            if(*i > *j) {
                int temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void inMang(int *arr, int n) {
    int *ptr = arr;
    for(int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 2, 8, 1, 9};
    int n = 5;
    
    printf("Mang ban dau: ");
    inMang(mang, n);
    
    sapXep(mang, n);
    
    printf("Mang sau khi sap xep: ");
    inMang(mang, n);
    
    return 0;
}
