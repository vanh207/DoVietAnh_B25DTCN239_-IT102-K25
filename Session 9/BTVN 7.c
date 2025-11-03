#include <stdio.h>

int main() {
    int n,i;   
    printf("Nhap so phan tu: ");
    scanf("%d", &n);   
    int a[n]; 
    for (i=0;i<n;i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }   
    printf("Mang ban dau: ");
    for (i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    printf("\n");   
    int j=n-1;
     i=0;
    while (i<j) {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }  
    printf("Mang sau khi dao nguoc: ");
    for (i=0;i<n;i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
