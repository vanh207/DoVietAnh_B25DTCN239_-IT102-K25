#include <stdio.h>
int main(){
	int number, i, digt, digtt; 
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&number);
	int arr[number];
	for(i=0;i<number;i++){
		printf("nhap arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("cac so chan trong mang la: ");
	for(i=0;i<number;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
			digt++;
		}
	}
	printf("\n");
	printf("cac so le trong mang la: ");
	for(i=0;i<number;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
			digtt++;
		}
	}
	printf("\n");
	printf("tong so chan la: %d\n",digt);
	printf("tong so le la: %d",digtt);
}
