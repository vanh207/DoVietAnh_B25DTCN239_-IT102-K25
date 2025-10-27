#include <stdio.h>
int main(){
	int number1, number2;
	float sum; 
	printf("nhap so tien dien dau thang: ");
	scanf("%d",&number1);
	printf("nhap so tien dien cuoi thang: ");
	scanf("%d",&number2);
	sum=(float)number2-number1;
	if(0<=sum<50){
		printf("tong tien dien la: %.3fVND",sum*10.000);
	}else if(50<=sum<100){
		printf("tong tien dien la: %.3fVND",sum*15.000);
	}else if(100<=sum<150){
		printf("tong tien dien la: %.3fVND",sum*20.000);
    }else if(150<=sum<200){
    	printf("tong tien dien la: %.3fVND",sum*15.000);
	}else if(200<=sum){
		printf("tong tien dien la: %.3fVND",sum*30.000);
	}
	
	return 0;
}
