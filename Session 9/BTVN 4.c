#include <stdio.h>
int main(){
	int a[100]={1,3,5,9,2};
	int max=a[0], i;
	int len=sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	printf("%d",max);
	return 0;	
}
