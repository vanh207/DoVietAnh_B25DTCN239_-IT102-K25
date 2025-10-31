#include <stdio.h>

int main() {
    int arr[5],i;
        
    for(i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(i = 1; i < 5; i++) {
    	if(max<arr[i]){
    		max=arr[i];
		}
		}
	int min=arr[0];
	for(i = 1; i < 5; i++) {
    	if(min>arr[i]){
    		min=arr[i];
		}
		}
    printf("so lon nhat trong mang la %d\n",max);
    printf("so be nhat trong mang la %d",min);
    return 0;
}
