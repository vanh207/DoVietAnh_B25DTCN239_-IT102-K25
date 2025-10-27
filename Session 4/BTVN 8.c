#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap canh a: ");
	scanf("%d",&a);
	printf("nhap canh b: ");
	scanf("%d",&b);
	printf("nhap canh c: ");
	scanf("%d",&c);
	if(a+b>c){
		printf("La 3 canh tam giac");
	}else{
		printf("khong La 3 canh tam giac");
	}
	return 0;
	
}
