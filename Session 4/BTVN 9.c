#include <stdio.h>
int main(){
	int number, number2,number3;
	printf("ngay = ");
	scanf("%d",&number2);
	printf("thang = ");
	scanf("%d",&number);
	printf("nam = ");
	scanf("%d",&number3);
	if(number2<=29 && number==2 && number3%4==0 && number3%100!=0||number3%400==0){
		printf("ngay thang nam hop le\n");
	}else if(number2<=31 && number==1 || number==3 || number== 5|| number== 7|| number==8|| number==10|| number==12 ){
		printf("ngay thang nam hop le\n");
	}else if(number2<=30 && number==4 || number==6 || number== 9|| number== 11){
		printf("ngay thang nam hop le\n");
    }else{
    	printf("ngay thang nam khong hop le");
	}
	return 0;
	
}
