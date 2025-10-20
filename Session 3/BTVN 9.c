#include <stdio.h>
int main(){
	int n;
	float A, B, C, T;
	printf("nhap so nguyen duong n>1: ");
	scanf("%d",&n);
	A=(float) 1/((n-1)*n);
	B=(float) 1/(n*(n+1));
	C=(float) 1/((n+1)*(n+2));
	T=A+B+C;
	printf("ket qua la: %.5f",T);
	return 0;
}

