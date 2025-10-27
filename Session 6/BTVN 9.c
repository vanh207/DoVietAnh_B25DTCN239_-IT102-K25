#include <stdio.h>
int main(){
	int a,b,c,lc;
	do{
		printf("\n\n1: nhap 3 so nguyen\n");
		printf("2: tong 3 so\n");
		printf("3: trung binh cong\n");
		printf("4: so lon nhat\n");
		printf("5: so nho nhat\n");
		printf("6: thoat\n");
		printf("\nlua chon cua ban: ");
		scanf("%d",&lc);
		switch(lc){
			case 1:
				printf("nhap so thu nhat: ");
				scanf("%d",&a);
				printf("nhap so thu 2: ");
				scanf("%d",&b);
				printf("nhap so thu 3: ");
				scanf("%d",&c);
				break;
			case 2:
				if(a!=0 && b!=0 && c!=0){ 
					printf("tong cua 3 so la: %d",a+b+c);
					break;
				}else{
					break;
				}
			case 3:
				if(a!=0 && b!=0 && c!=0){ 
					printf("trung binh cong la: %.2f",(float)(a+b+c)/3);
					break;
				}else{
					break;
				}
				case 4:
				if(a!=0 && b!=0 && c!=0){ 
					int max=a;
					if(b > max) max = b;
    				if(c > max) max = c;		 
					printf("so lon nhat la: %d",max);
					break;
				}else{
					break;
				}
			case 5:
				if(a!=0 && b!=0 && c!=0){
					int min=a;
					if(b < min) min = b;
	    			if(c < min) min = c;
					printf("so nho nhat la: %d",min);
					break;
				}else{
					printf("loi chua nhap so");
					
					break;
				}
			case 6:
				printf("Thoat chuong trinh!\n");
                break;
			default:
				printf("lua chon khong hop le\n"); 	
		}
	}while(lc!=6);
	return 0;	
}
