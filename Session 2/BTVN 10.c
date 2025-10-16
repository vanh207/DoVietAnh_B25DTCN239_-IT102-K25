#include <stdio.h>
#include <math.h>
int main(){
	int a=3;
	int b=4;
	int c=2;
	float A=0;
	A=(sqrt(pow(a,2)+pow(b,2))/(c+1))+((a*b)/c)-sqrt(abs(a-b)+pow(c,2));
	printf("%f",A);
	return 0;
}
