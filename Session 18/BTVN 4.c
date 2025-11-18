#include <stdio.h>

void inMang(int *arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    inMang(mang, n);
    
    return 0;
}
