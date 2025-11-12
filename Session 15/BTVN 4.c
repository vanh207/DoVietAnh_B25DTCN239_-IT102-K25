#include <stdio.h>
int sumNumberlist(int arr[], int num){
	int sum, i;
	for(i=0;i<num;i++){
		sum+=arr[i];
	}
	return sum;
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
	printf("tong cac so nguyen co trong mang la: %d",sumNumberlist(arr, num));
}
