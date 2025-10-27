#include <stdio.h>

int main(){
	float tiendien, sodien,tienbacthang;
	int loai;
	printf("nhap so dien tieu thu trong thang: ");
	scanf("%f",&sodien);
	printf("loai ho tieu dung (1->3) ");
	scanf("%d",&loai);
	if(sodien<=50){
		tienbacthang=sodien*1.500;	
	}else if(50<sodien<=100){
		tienbacthang=sodien*2.000;
	}else if(100<sodien<=200){
		tienbacthang=sodien*2.500;
	}else{
		tienbacthang=sodien*3.000;
	}
	switch(loai){
		case 1:
			printf("tong so tien la %.3f",tienbacthang+tienbacthang*0.05);
			break;
		case 2:
			printf("tong so tien la %.3f",tienbacthang+tienbacthang*0.1);
			break;
		case 3:
			printf("tong so tien la %.3f",tienbacthang+tienbacthang*0.08);
			break;		
	}
	return 0;	
}
