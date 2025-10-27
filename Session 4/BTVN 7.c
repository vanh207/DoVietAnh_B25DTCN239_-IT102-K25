#include <stdio.h>
int main(){
	int number;
	printf("nhap vao mot so nguyen dai dien cho nam: ");
	scanf("%d",&number);
	if(number%4==0 && number%100!=0 || number%4==0){
		printf("Nam %d la nam nhuan",number);
	}else{
		printf("Nam %d khong la nam nhuan",number);
	}
	return 0;
	
}
