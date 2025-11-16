#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i;
    int coChuHoa = 0, coChuThuong = 0, coChuSo = 0, coKyTuDB = 0;
    
    printf("Nhap mat khau: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;
    
    int doDai = strlen(password);
    
    if(doDai < 8) {
        printf("Khong hop le");
        return 0;
    }
    
    for(i = 0; i < doDai; i++) {
        if(isupper(password[i])) {
            coChuHoa = 1;
        } else if(islower(password[i])) {
            coChuThuong = 1;
        } else if(isdigit(password[i])) {
            coChuSo = 1;
        } else {
            coKyTuDB = 1;
        }
    }
    
    if(coChuHoa && coChuThuong && coChuSo && coKyTuDB) {
        printf("Hop le");
    } else {
        printf("Khong hop le");
    }
    
    return 0;
}
