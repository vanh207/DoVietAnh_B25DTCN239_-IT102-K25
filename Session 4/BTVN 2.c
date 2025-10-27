#include <stdio.h>
int main(){
	int number;
	printf("nhap mot so nguyen: ");
	scanf("%d",&number);
	if(number%2==0){
		printf("so vua nhap la so chan\n");
	}else{
		printf("so vua nhap la so le\n");
	}
	return 0;
	
}
