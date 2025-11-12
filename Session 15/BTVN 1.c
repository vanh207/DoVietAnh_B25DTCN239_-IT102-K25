#include <stdio.h>
#include <stdlib.h>
int unders(int num1, int num2){
	int result = abs(num1-num2);
	return result;
}
int accumulate(int num1, int num2){
	int result = num1*num2;
	return result;
}
int main(){
	int num1=10;
	int num2=20;
	printf("hieu cua 2 so la: %d\n",unders(num1,num2));
	printf("tich cua 2 so la: %d",accumulate(num1,num2));	
}
