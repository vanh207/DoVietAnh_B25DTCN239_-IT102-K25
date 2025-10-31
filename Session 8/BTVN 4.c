#include <stdio.h>
int main(){
	int i,n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("nhap so phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		printf("%d",a[i]);
	}
	return 0;
}
