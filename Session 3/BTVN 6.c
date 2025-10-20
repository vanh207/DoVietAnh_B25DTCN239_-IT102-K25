#include <stdio.h>
int main(){
	float dt, day, cao;
	printf("nhap do dai canh day ");
	scanf("%f",&day);
	printf("nhap chieu cao ");
	scanf("%f",&cao);
	dt = 0.5*day*cao;
	printf("dien tich hinh tam giac la: %.2f",dt);
	return 0;
}
