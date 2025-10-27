#include <stdio.h>

int main() {
    int n,i;
    int dem_chan = 0, dem_le = 0;
    
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            dem_chan++;
        } else {
            dem_le++;
        }
    }
    printf("%d so chan\n", dem_chan);
    printf("%d so le\n", dem_le);
    
    return 0;
}
