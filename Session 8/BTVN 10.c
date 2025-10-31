#include <stdio.h>

int main(){
    int n, i, j;
    printf("nhap so luong phan tu: ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        printf("nhap so thu [%d]: ",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("mang sau khi nhap la\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    printf("so nguyen to trong mang la\n");
    for(i=0;i<n;i++){
        int num = a[i];
        int flag = 1;
        
        if(num < 2){
            flag = 0;
        } else if(num == 2){
            flag = 1;
        } else if(num % 2 == 0){
            flag = 0;
        } else {
            for(j = 3; j * j <= num; j += 2){
                if(num % j == 0){
                    flag = 0;
                    break;
                }	
            }
        }
        
        if(flag){
            printf("%d ", num);
        }
    }
    
    return 0;
}
