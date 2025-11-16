#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    char kyTu;
    int i, j;
    
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;
    
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &kyTu);
    
    for(i = 0, j = 0; chuoi[i] != '\0'; i++) {
        if(chuoi[i] != kyTu) {
            chuoi[j] = chuoi[i];
            j++;
        }
    }
    chuoi[j] = '\0';
    
    printf("Chuoi sau khi xoa: %s", chuoi);
    
    return 0;
}
