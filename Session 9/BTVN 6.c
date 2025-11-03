#include <stdio.h>
int main(){
	int n, i, number, flag=0,tmp=0;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("nhap arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("nhap gia tri can tim: ");
	scanf("%d",&number);
	for(i=0;i<len;i++){
		if(arr[i]==number){
			flag=1;
			tmp=i;
		}
	}
	if(flag){
		printf("so %d nam o vi tri %d",number,tmp);
	}else{
		printf("so %d khong co trong mang",number);
	}
	return 0;
}
