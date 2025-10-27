#include <stdio.h>
int main(){
	int a,b;
	printf("nhap canh a: ");
	scanf("%d",&a);
	printf("nhap canh b: ");
	scanf("%d",&b);
	if(a>b){
		printf("so lon hon la %d",a);
	}else if(a==b){
		printf("hai so bang nhau");
	}else{
		printf("so lon hon la %d",b);
	}
	return 0;
	
}
