#include <stdio.h>
int main(){
	int number;
	printf("nhap vao mot so nguyen dai dien cho thang: ");
	scanf("%d",&number);
	if(number==2){
		printf("thang %d co 28 hoac 29 ngay\n",number);
	}else if(number==1 || number==3 || number== 5|| number== 7|| number==8|| number==10|| number==12){
		printf("thang %d co 31 ngay\n",number);
	}else if(number==4 || number==6 || number== 9|| number== 11){
		printf("thang %d co 30 ngay\n",number);
    }else{
    	printf("thang khong hop le");
	}
	return 0;
	
}
