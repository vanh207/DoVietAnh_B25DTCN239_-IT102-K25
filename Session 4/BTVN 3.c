#include <stdio.h>
int main(){
	int number;
	printf("nhap mot so nguyen: ");
	scanf("%d",&number);
	if(number%3==0 && number%5==0){
		printf("so vua nhap chia het cho 3 va 5\n");
	}else if(number%3==0){
		printf("so vua nhap chia het cho 3\n");
	}else{
		printf("so vua nhap chia het cho 5\n");
	}
	return 0;
}
