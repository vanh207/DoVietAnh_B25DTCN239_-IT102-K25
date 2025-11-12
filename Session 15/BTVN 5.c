#include <stdio.h>

void countNumber(int arr[], int num) {
    int i, j;
    int maxNumber = arr[0];
    int maxCount = 0;
    
    for(i = 0; i < num; i++) {
        int currentCount = 0;  
        for(j = 0; j < num; j++) {  
            if(arr[i] == arr[j]) {
                currentCount++;
            }
        }
        
        if(currentCount > maxCount) {
            maxCount = currentCount;
            maxNumber = arr[i];
        }
    }
    
    printf("So %d xuat hien nhieu nhat: %d lan trong mang", maxNumber, maxCount);
}

int main() {
    int num, i;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &num);
    
    int arr[num];
    for(i = 0; i < num; i++) {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
	}
    countNumber(arr, num);
    
    
    return 0;
}
