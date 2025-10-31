#include <stdio.h>
int main(){
	int n,i;
	printf("nhap so phan tu mang: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		do{
			printf("nhap so thu %d: ",i+1);
			scanf("%d",&a[i]);
			if(a[i]%2==0){
				printf("so vua nhap khong phai so le, vui long nhap lai\n ");
		}
		}while(a[i]%2==0);
	}
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
	return 0;

}
