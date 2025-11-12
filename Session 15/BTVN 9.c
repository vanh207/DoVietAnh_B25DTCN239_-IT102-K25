#include <stdio.h>

void countNumber(int arr[], int num) {
    int i, j;
    int minNumber = arr[0];
    int minCount = num + 1; 
    
    for(i = 0; i < num; i++) {
        int currentCount = 0;  
        for(j = 0; j < num; j++) {  
            if(arr[i] == arr[j]) {
                currentCount++;
            }
        }
        
        if(currentCount < minCount) {
            minCount = currentCount;
            minNumber = arr[i];
        }
        else if(currentCount == minCount && arr[i] < minNumber) {
            minNumber = arr[i];
        }
    }
    
    printf("So %d xuat hien it nhat: %d lan trong mang", minNumber, minCount);
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
