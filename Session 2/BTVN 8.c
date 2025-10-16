#include <stdio.h>
int main(){
	int number=12345;
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
	n=number % 10;
	result = result * 10 + n;
	number=number / 10;			
printf("%d",result);
	return 0;
}
