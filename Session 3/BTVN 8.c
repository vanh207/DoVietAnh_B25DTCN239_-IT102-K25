#include <stdio.h>
int main(){
	int number;
	printf("nhap so co 4 chu so ");
	scanf("%d",&number);
	int result=0;
	int n=0;
	n=number % 10;
	result = result * 10 + n;
	number=number / 10;
	n=number % 10;
	result = result * 10 + n;
	number=number / 10;	
	n=number % 10;
	result = result * 10 + n;
	number=number / 10;	
	n=number % 10;
	result = result * 10 + n;
	number=number / 10;			
	printf("%d",result);
	return 0;
}

