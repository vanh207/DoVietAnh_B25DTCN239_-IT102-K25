#include <stdio.h>
int main(){
	int number1, number2, sum;
	printf("nhap so tien dien dau thang: ");
	scanf("%d",&number1);
	printf("nhap so tien dien cuoi thang: ");
	scanf("%d",&number2);
	sum=number2-number1;
	if(0<=sum<50){
		printf("gia dien la 10.000VND/kWh");
	}else if(50<=sum<100){
		printf("gia dien la 15.000VND/kWh");
	}else if(100<=sum<150){
		printf("gia dien la 20.000VND/kWh");
    }else if(150<=sum<200){
    	printf("gia dien la 25.000VND/kWh");
	}else if(200<=sum){
		printf("gia dien la 30.000VND/kWh");
	}
	return 0;
	
}
