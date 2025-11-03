#include <stdio.h>
#include <math.h>
int main(){
	int n,i,j,isPrime=0; 
    printf("Nhap so phan tu: ");
    scanf("%d", &n );
    int a[n];   
    for (i=0;i<n;i++) {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d", &a[i]);
    }
    int len=sizeof(a)/sizeof(a[0]);
    int sum=0;
    printf("cac so nguyen to: ");
	for(i=0; i<len; i++){
		isPrime = 1; 
		if(a[i]<2){
			isPrime = 0;
		}else{
			for(j=2; j<=sqrt(a[i]); j++){
				if(a[i]%j==0){
					isPrime = 0;
					break;
				}
			}
			}
			if(isPrime){
				printf("%d ",a[i]);
				sum+=a[i];
				}
			}
	printf("\n");
	printf("tong cac so nguyen to: %d",sum);
}
