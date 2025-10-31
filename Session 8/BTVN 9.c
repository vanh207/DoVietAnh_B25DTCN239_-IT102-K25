#include <stdio.h>
int main(){
	int rows, cols, i, j;
	printf("nhap so hang: ");
	scanf("%d",&rows);
	printf("nhap so cot: ");
	scanf("%d",&cols);
	int a[rows][cols];
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("nhap phan tu [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Mang vua nhap:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("cac phan tu nam tren duong bien \n");
     for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
        	if(i==0 || i==rows-1 || j==0 || j==cols-1){
        		printf("%d ",a[i][j]);
			}else{
				printf("  ");
			}
            
            }
        printf("\n");
}
}
