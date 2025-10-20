#include <stdio.h>
int main(){
	float toan, van, anh, sum, tb;
	printf("nhap diem toan: ");
	scanf("%f",&toan);
	printf("nhap diem van: ");
	scanf("%f",&van);
	printf("nhap diem anh: ");
	scanf("%f",&anh);
	sum = toan + van + anh;
	tb= sum / 3;
	printf("tong diem la: %.2f, diem trung binh la: %.2f",sum,tb);
	return 0;
}
