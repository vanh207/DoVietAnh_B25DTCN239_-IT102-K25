#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    char tuDaiNhat[100];
    char tuHienTai[100];
    int doDaiMax = 0;
    int doDaiHienTai = 0;
    int i, j = 0;
    
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;
    
    for(i = 0; i <= strlen(chuoi); i++) {
        if(chuoi[i] != ' ' && chuoi[i] != '\0') {
            tuHienTai[j] = chuoi[i];
            j++;
            doDaiHienTai++;
        } else {
            if(doDaiHienTai > 0) {
                tuHienTai[j] = '\0';
                
                if(doDaiHienTai > doDaiMax) {
                    doDaiMax = doDaiHienTai;
                    strcpy(tuDaiNhat, tuHienTai);
                }
            }
            j = 0;
            doDaiHienTai = 0;
        }
    }
    
    printf("Tu dai nhat: %s\n", tuDaiNhat);
    printf("Do dai: %d", doDaiMax);
    
    return 0;
}
