#include <stdio.h>
int main(){
	int a[5],i,n;
	for(i=0;i<5;i++){
		printf("nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		if(a[i]%2==0){
			a[i]+=3;
		}else{
			a[i]+=2;
		}
		printf("%d",a[i]);
	}
}
