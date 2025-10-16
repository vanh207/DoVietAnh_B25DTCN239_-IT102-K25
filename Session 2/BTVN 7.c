#include <stdio.h>
int main(){
	int number=12345;
	int t=0;
	int n=0;
		n=number % 10;
		t=t+n;
		number=number / 10;
		n=number % 10;
		t+=n;
		number=number / 10;	
		n=number % 10;
		t+=n;
		number=number / 10;	
		n=number % 10;
		t+=n;
		number=number / 10;	
		n=number % 10;
		t+=n;
		number=number / 10;			
printf("%d",t);
	return 0;
}
