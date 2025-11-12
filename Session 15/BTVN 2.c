#include <stdio.h>
int separateNumbers(int num){
	int sum=0;
	while(num>0){
		int digit=num%10;
		num/=10;
		sum+=digit;
	}
	return sum;
}
int main(){
	int num;
	printf("nhap 1 so nguyen: ");
	scanf("%d",&num);
	printf("tong cac chu so trong 1 so la: %d",separateNumbers(num));
	
}
