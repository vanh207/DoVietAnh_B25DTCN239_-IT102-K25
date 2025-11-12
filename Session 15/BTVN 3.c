#include <stdio.h>
int reverse(int num1){
	int results, digit;
	while(num1>0){
		digit=num1%10;
		results=results*10+digit;
		num1/=10;	
	}
	return results;
}
int main(){
	int num1;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&num1);
	printf("so dao nguoc la: %d",reverse(num1));
}
