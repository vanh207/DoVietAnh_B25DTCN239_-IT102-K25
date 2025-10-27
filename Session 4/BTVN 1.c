#include <stdio.h>
int main(){
	int number;
	printf("nhap mot so nguyen: ");
	scanf("%d",&number);
	if(number>0){
		printf("so vua nhap la so duong\n");
	}else{
		printf("so vua nhap la so am\n");
	}
	return 0;
	
}
