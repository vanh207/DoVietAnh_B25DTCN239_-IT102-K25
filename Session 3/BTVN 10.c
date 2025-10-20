#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	float S;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	S=(float)sqrt(a+sqrt(b+1))+sqrt(b+sqrt(pow(a,2)+pow(b,2)));
	printf("S= %.2f",S);
	return 0;
}

