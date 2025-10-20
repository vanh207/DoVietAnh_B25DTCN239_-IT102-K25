#include <stdio.h>
int main(){
	int number;
	int a, b, c, d, e;
	int result=0;
	printf("nhap so ");
	scanf("%d",&number);	
	a = number %10;
	b = number / 10 % 10;
	c = number / 100 % 10;
	d = number / 1000 % 10;
	e = number /  10000;
	result = a+b+c+d+e;	
	printf("%d",result);
	return 0;
}
