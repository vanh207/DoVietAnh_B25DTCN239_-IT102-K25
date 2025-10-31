#include <stdio.h>

int main() {
    int arr[5] = {3, 8, 15, 7, 12};
    int coSoChan = 0;
    
    printf("Cac so chan trong mang: ");
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            coSoChan = 1;
        }
    }
    
    if(!coSoChan) {
        printf("Mang khong chua so chan");
    }
    
    return 0;
}
