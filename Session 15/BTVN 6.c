#include <stdio.h>
void printArr(int arr[], int num){
	printf("mang sau khi sap xep la: ");
	int i;
	for(i=0;i<num;i++){
		printf("%d ",arr[i]);
	}
}
void bubbleSort(int arr[], int num1){
	int i,j;
	for(i=0;i<num1;i++){
		for(j=0;j<num1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	printArr(arr,num1);				
}

int main(){
	int num, i;
	printf("nhap so luong phan tu: ");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++){
		printf("nhap arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr, num);
}
